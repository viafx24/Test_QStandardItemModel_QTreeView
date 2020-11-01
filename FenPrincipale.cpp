#include "FenPrincipale.h"

#include "FenPrincipale.h"

FenPrincipale::FenPrincipale()
{
    QVBoxLayout *layout = new QVBoxLayout;

    // crée un modèle standard (trés flexible)
    QStandardItemModel *modele = new QStandardItemModel;

    // on ajoute un item au premier niveau
    QStandardItem *item = new QStandardItem("John Deuf");
    modele->appendRow(item);

    // on ajoute un item au deuxième niveau
    item->appendRow(new QStandardItem("17 ans"));

    QStandardItem *item2 = new QStandardItem("Michael Doe");
    modele->appendRow(item2);
    item2->appendRow(new QStandardItem("23 ans"));

    // on crée la view et on la connecte.
    QTreeView *vue = new QTreeView;
    vue->setModel(modele);

    // permet de supprimer le 1 en haut du widget
    vue->header()->hide();

    layout->addWidget(vue);
    setLayout(layout);
}
