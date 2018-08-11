/*
** 
** Theme : [Operations Information & Communications Wing] LINK Algorithm Contest
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.06.
** Change Log : First written '18.07.28.
** File Info : 
** https://www.acmicpc.net/problem/14936
** Input: 
** Output: 
** 
** */

/*

	Let us say the each 'act'(or say operation) A, B, C, D. 
	If we only see the results since the final positions of pressed/unpresssed button matters, 
	the following equation can be derived as, 
	
	A = BC = CB
	B = AC = CA
	C = AB = BA
	D
	
	1) In the first case of which nothing is pressed, 
		then it can be expressed as '0'.
	
	2) Second case when each 'act' have been done one time: A, B, C, D
	
	3) Third case when each act have been done twice: 
		AA(=0), AB(=C), AC(=B), AD,
		BA(=C), BB(=0), BC(=A), BD ... 
		
		Therefore, AD, BD, CD only three cases.
		
		
	4) No need to care.
	
	
*/





