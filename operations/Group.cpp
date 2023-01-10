#include "Group.h"
#include "..\controller.h"
#include "../CMUgraphicsLib/CMUgraphics.h"

opGroup::opGroup(controller* pCont) :operation(pCont)
{}
opGroup::~opGroup()
{}

//Execute the operation
void opGroup::Execute()
{




}
void opGroup::Undo()
{
	Graph* pGr = pControl->getGraph();
	pGr->SendFromShapesListToUndo();
}
void opGroup::Redo()
{
	Graph* pGr = pControl->getGraph();
	pGr->SendFromUndoToShapesList();
}
