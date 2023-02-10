/**
 * \file   validationFormat.cpp
 * \brief  Definition des methodes de validation
 * \author Dominic Boucher
 */

#include <string>

namespace util
{


  bool
  validerFormatNom (const std::string& p_issn)
  {
    /**
     * \brief Valide le format d'un nom d'auteur
     * \param[in] p_issn Nom de l'auteur
     * \param[out] Booleen qui represente la validite du nom entre en parametre
     */
    if (p_issn.empty ())
      {
        return false;
      }
    for (int i = 0;  i < p_issn.size (); i++)
      {
        if ((p_issn[i] == ' ') or (p_issn[i] == '-'))
          {
            if (i < p_issn.size () - 1)
              {
                if ((p_issn[i + 1] == ' ') or (p_issn[i + 1] == '-'))
                  {
                    return false;
                  }
              }
          }
        else if (!isalpha (p_issn[i]))
          {
            return false;
          }
      }
    return true;
  }


  bool
  validerCodeIssn (const std::string & p_issn)
  {
    /**
     * \brief Valide le format d'un code ISSN
     * \param[in] p_issn ISSN d'un livre
     * \param[out] issnValide Booleen qui represente la validite du code ISSN entre en parametre
     */
    bool issnValide = false;
    bool formatValide = false;
    bool chiffresValides = true;
    int issnLongueur = 14;

    int debutSerieChiffres1 = 5;
    int finSerieChiffres1 = 8;
    int debutSerieChiffres2 = 10;
    int finSerieChiffres2 = 13;

    if (p_issn.size () == issnLongueur)
      {
        if (p_issn.compare (0, 5, "ISSN ") == 0)
          {
            if (p_issn[9] == '-')
              {
                for (int i = debutSerieChiffres1; i < finSerieChiffres1 + 1; i++)
                  {
                    if (!isdigit (p_issn[i]))
                      {
                        chiffresValides = false;
                      }
                  }
                for (int i = debutSerieChiffres2; i < finSerieChiffres2; i++)
                  {
                    if (!isdigit (p_issn[i]))
                      {
                        chiffresValides = false;
                      }
                  }
                if (chiffresValides)
                  {
                    formatValide = true;
                  }
              }
          }
      }
    if (formatValide)
      {
        std::string chiffres = p_issn.substr (5, 4) + p_issn.substr (10, 4);
        int ponderation = 8;
        int somme = 0;
        for (int i = 0; i < chiffres.size () - 1; i++)
          {
            somme += ponderation * (chiffres[i] - 48);
            ponderation--;
          }
        int cle;
        if (somme % 11 == 0)
          {
            cle = 0;
          }
        else
          {
            cle = 11 - (somme % 11);
          }
        if (chiffres[chiffres.size () - 1] - 48 == cle)
          {
            issnValide = true;
          }
      }
    return issnValide;
  }


  bool
  validerCodeIsbn (const std::string & p_isbn)
  {
    /**
     * \brief Valide le format d'un code ISBN
     * \param[in] p_isbn ISBN d'un livre
     * \param[out] isbnValide Booleen qui represente la validite du ISBN entre en parametre
     */
    std::string chiffres[5] = {};
    bool formatValide = false;
    if (p_isbn.size () == 22)
      {
        if (p_isbn.substr (0, 5) == "ISBN ")
          {
            int tirets = 0;
            bool allDigits = true;
            for (int i = 5; i < p_isbn.size (); i++)
              {
                if (p_isbn[i] == '-')
                  {
                    tirets++;
                  }
                else if (!isdigit (p_isbn[i]))
                  {
                    allDigits = false;
                  }
              }
            if ((tirets == 4) && (allDigits == true))
              {
                formatValide = true;
                int index = 0;
                std::string serie = "";
                for (int i = 5; i < p_isbn.size (); i++)
                  {
                    if (p_isbn[i] == '-')
                      {
                        chiffres[index] = serie;
                        index++;
                        serie = "";
                      }
                    else
                      {
                        serie += p_isbn[i];
                        if (i == p_isbn.size () - 1)
                          {
                            chiffres[index] = serie;
                          }
                      }
                  }
              }
          }
      }
    if (formatValide == false)
      {
        return false;
      }
    bool isbnValide = false;
    if ((atoi (chiffres[0].c_str ()) == 978) || (atoi (chiffres[0].c_str ()) == 979))
      {
        bool domaineValide = false;
        switch (atoi (chiffres[1].c_str ()))
          {
            case 0 ... 7:
              domaineValide = true;
            case 80 ... 94:
              domaineValide = true;
            case 600 ... 649:
              domaineValide = true;
            case 950 ... 989:
              domaineValide = true;
            case 9900 ... 9989:
              domaineValide = true;
            case 99900 ... 9999999:
              domaineValide = true;
          }
        if (domaineValide == true)
          {
            bool editeurValide = false;
            switch (atoi (chiffres[2].c_str ()))
              {
                case 0 ... 19:
                  editeurValide = true;
                case 200 ... 699:
                  editeurValide = true;
                case 7000 ... 8499:
                  editeurValide = true;
                case 85000 ... 89999:
                  editeurValide = true;
                case 900000 ... 949999:
                  editeurValide = true;
                case 9500000 ... 9999999:
                  editeurValide = true;
              }
            if (editeurValide)
              {
                int somme = 0;
                int cle;
                std::string chiffresSansCle = "";
                for (int i = 0; i < 4; i++)
                  {
                    chiffresSansCle += chiffres[i];
                  }
                for (int i = 0; i < chiffresSansCle.size (); i++)
                  {
                    if (i % 2 == 0)
                      {
                        somme += (int) chiffresSansCle[i] - 48;
                      }
                    else
                      {
                        somme += 3 * ((int) chiffresSansCle[i] - 48);
                      }
                  }
                cle = 10 - (somme % 10);
                if (cle == atoi (chiffres[4].c_str ()))
                  {
                    isbnValide = true;
                  }
              }
          }
      }
    return isbnValide;
  }


  bool
  validerNombre (const int nombre)
  {
    return nombre > 0;
  }

}