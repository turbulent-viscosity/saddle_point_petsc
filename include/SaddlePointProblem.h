#ifndef _SADDLEPOINTPROBLEM_H_
#define _SADDLEPOINTPROBLEM_H_

#include <petsc.h>
#include "Mesh.h"

typedef struct
{
	PetscScalar uu, tt;
}AppCtx;

PetscErrorCode solveSaddlePointProblem(PetscInt, PetscInt);

#endif
