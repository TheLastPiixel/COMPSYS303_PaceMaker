/*
 * pacemaker.h
 *
 *  Created on: 24/09/2019
 *      Author: jchu491
 */

#ifndef PACEMAKER_H_
#define PACEMAKER_H_

//Functions
void reset();
void tick();

//Inputs

extern char as, vs;
extern int to_lri, to_uri, to_avi, to_pvarp, to_vrp, to_aei;

//Outputs

extern char ap, vp;
extern char LRI, URI, AVI, PVARP, VRP, AEI;



#endif /* PACEMAKER_H_ */
