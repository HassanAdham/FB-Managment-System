#include "EditPro.h"

FBManagmentSytem::EditPro::EditPro(void)
{
	InitializeComponent();
}

FBManagmentSytem::EditPro::EditPro(Facebook ^ f, User ^ u)
{
	InitializeComponent();
	F = f;
	U = u;
}
