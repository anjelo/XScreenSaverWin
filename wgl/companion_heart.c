#include "gllist.h"
static const float data[]={
	-0.126112,-0.516835,0.846745,0.062716,0.065295,-0.005781,
	-0.233173,-0.466563,0.853199,0.063951,0.064804,-0.005781,
	-0.169323,-0.502195,0.848015,0.063583,0.066646,-0.004818,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.055116,0.063504,-0.005781,
	0,0,1,0.054127,0.064391,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.054127,0.064391,-0.005781,
	0,0,1,0.052967,0.065039,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.052967,0.065039,-0.005781,
	0,0,1,0.051693,0.065415,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.051693,0.065415,-0.005781,
	0,0,1,0.050367,0.065502,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.050367,0.065502,-0.005781,
	0,0,1,0.049054,0.065295,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.049054,0.065295,-0.005781,
	0,0,1,0.04782,0.064804,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.04782,0.064804,-0.005781,
	0,0,1,0.046724,0.064053,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.046724,0.064053,-0.005781,
	0,0,1,0.04582,0.063079,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.04582,0.063079,-0.005781,
	0,0,1,0.045152,0.06193,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.045152,0.06193,-0.005781,
	0,0,1,0.044754,0.060662,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.044754,0.060662,-0.005781,
	0,0,1,0.044645,0.059338,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.044645,0.059338,-0.005781,
	0,0,1,0.044702,0.058527,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.044702,0.058527,-0.005781,
	0,0,1,0.044827,0.057723,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.044827,0.057723,-0.005781,
	0,0,1,0.045017,0.056932,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.045017,0.056932,-0.005781,
	0,0,1,0.045272,0.05616,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.045272,0.05616,-0.005781,
	0,0,1,0.04559,0.055411,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.04559,0.055411,-0.005781,
	0,0,1,0.04597,0.054691,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.04597,0.054691,-0.005781,
	0,0,1,0.046407,0.054006,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.046407,0.054006,-0.005781,
	0,0,1,0.0469,0.053359,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.0469,0.053359,-0.005781,
	0,0,1,0.047445,0.052755,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.047445,0.052755,-0.005781,
	0,0,1,0.048038,0.052198,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.048038,0.052198,-0.005781,
	0,0,1,0.048675,0.051693,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.048675,0.051693,-0.005781,
	0,0,1,0.049352,0.051241,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.049352,0.051241,-0.005781,
	0,0,1,0.050001,0.050829,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.050001,0.050829,-0.005781,
	0,0,1,0.050634,0.050393,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.050634,0.050393,-0.005781,
	0,0,1,0.05125,0.049933,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.05125,0.049933,-0.005781,
	0,0,1,0.051848,0.049449,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.051848,0.049449,-0.005781,
	0,0,1,0.052427,0.048943,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.052427,0.048943,-0.005781,
	0,0,1,0.052987,0.048416,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.052987,0.048416,-0.005781,
	0,0,1,0.053525,0.047867,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.053525,0.047867,-0.005781,
	0,0,1,0.054043,0.047299,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.054043,0.047299,-0.005781,
	0,0,1,0.054538,0.046711,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.054538,0.046711,-0.005781,
	0,0,1,0.055011,0.046104,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.055011,0.046104,-0.005781,
	0,0,1,0.05546,0.04548,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.05546,0.04548,-0.005781,
	0,0,1,0.055885,0.044839,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.055885,0.044839,-0.005781,
	0,0,1,0.05631,0.04548,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.05631,0.04548,-0.005781,
	0,0,1,0.05676,0.046104,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.05676,0.046104,-0.005781,
	0,0,1,0.057232,0.046711,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.057232,0.046711,-0.005781,
	0,0,1,0.057728,0.047299,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.057728,0.047299,-0.005781,
	0,0,1,0.058245,0.047867,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.058245,0.047867,-0.005781,
	0,0,1,0.058784,0.048416,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.058784,0.048416,-0.005781,
	0,0,1,0.059343,0.048943,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.059343,0.048943,-0.005781,
	0,0,1,0.059922,0.049449,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.059922,0.049449,-0.005781,
	0,0,1,0.06052,0.049933,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.06052,0.049933,-0.005781,
	0,0,1,0.061136,0.050393,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.061136,0.050393,-0.005781,
	0,0,1,0.061769,0.050829,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.061769,0.050829,-0.005781,
	0,0,1,0.062418,0.051241,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.062418,0.051241,-0.005781,
	0,0,1,0.063095,0.051693,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.063095,0.051693,-0.005781,
	0,0,1,0.063732,0.052198,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.063732,0.052198,-0.005781,
	0,0,1,0.064326,0.052755,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.064326,0.052755,-0.005781,
	0,0,1,0.06487,0.053359,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.06487,0.053359,-0.005781,
	0,0,1,0.065363,0.054006,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.065363,0.054006,-0.005781,
	0,0,1,0.065801,0.054691,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.065801,0.054691,-0.005781,
	0,0,1,0.06618,0.055411,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.06618,0.055411,-0.005781,
	0,0,1,0.066498,0.05616,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.066498,0.05616,-0.005781,
	0,0,1,0.066754,0.056932,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.066754,0.056932,-0.005781,
	0,0,1,0.066944,0.057723,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.066944,0.057723,-0.005781,
	0,0,1,0.067068,0.058527,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.067068,0.058527,-0.005781,
	0,0,1,0.067125,0.059338,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.067125,0.059338,-0.005781,
	0,0,1,0.067016,0.060662,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.067016,0.060662,-0.005781,
	0,0,1,0.066618,0.06193,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.066618,0.06193,-0.005781,
	0,0,1,0.065951,0.063079,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.065951,0.063079,-0.005781,
	0,0,1,0.065047,0.064053,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.065047,0.064053,-0.005781,
	0,0,1,0.063951,0.064804,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.063951,0.064804,-0.005781,
	0,0,1,0.062716,0.065295,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.062716,0.065295,-0.005781,
	0,0,1,0.061404,0.065502,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.061404,0.065502,-0.005781,
	0,0,1,0.060078,0.065415,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.060078,0.065415,-0.005781,
	0,0,1,0.058804,0.065039,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.058804,0.065039,-0.005781,
	0,0,1,0.057644,0.064391,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.057644,0.064391,-0.005781,
	0,0,1,0.056655,0.063504,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.056655,0.063504,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.055885,0.06242,-0.005781,
	0,0,1,0.055116,0.063504,-0.005781,
	0.600355,0.41774,0.681958,0.05546,0.04548,-0.005781,
	0.611328,0.411243,0.676134,0.055414,0.04397,-0.004818,
	0.619748,0.407106,0.670953,0.055885,0.044839,-0.005781,
	0.611328,0.411243,0.676134,0.055414,0.04397,-0.004818,
	0.600355,0.41774,0.681958,0.05546,0.04548,-0.005781,
	0.583861,0.425853,0.691199,0.054915,0.044676,-0.004818,
	0.573435,0.432324,0.695894,0.055011,0.046104,-0.005781,
	0.583861,0.425853,0.691199,0.054915,0.044676,-0.004818,
	0.600355,0.41774,0.681958,0.05546,0.04548,-0.005781,
	0.583861,0.425853,0.691199,0.054915,0.044676,-0.004818,
	0.573435,0.432324,0.695894,0.055011,0.046104,-0.005781,
	0.557839,0.440321,0.703515,0.05439,0.045363,-0.004818,
	0.547914,0.446817,0.707209,0.054538,0.046711,-0.005781,
	0.557839,0.440321,0.703515,0.05439,0.045363,-0.004818,
	0.573435,0.432324,0.695894,0.055011,0.046104,-0.005781,
	0.557839,0.440321,0.703515,0.05439,0.045363,-0.004818,
	0.547914,0.446817,0.707209,0.054538,0.046711,-0.005781,
	0.528358,0.458036,0.714871,0.05384,0.046029,-0.004818,
	0.525024,0.459644,0.716294,0.054043,0.047299,-0.005781,
	0.528358,0.458036,0.714871,0.05384,0.046029,-0.004818,
	0.547914,0.446817,0.707209,0.054538,0.046711,-0.005781,
	0.525024,0.459644,0.716294,0.054043,0.047299,-0.005781,
	0.507344,0.470385,0.722039,0.053525,0.047867,-0.005781,
	0.528358,0.458036,0.714871,0.05384,0.046029,-0.004818,
	0.502587,0.474851,0.722443,0.053266,0.046673,-0.004818,
	0.528358,0.458036,0.714871,0.05384,0.046029,-0.004818,
	0.507344,0.470385,0.722039,0.053525,0.047867,-0.005781,
	0.507344,0.470385,0.722039,0.053525,0.047867,-0.005781,
	0.484849,0.48521,0.727662,0.052987,0.048416,-0.005781,
	0.502587,0.474851,0.722443,0.053266,0.046673,-0.004818,
	0.480277,0.489774,0.727637,0.052668,0.047293,-0.004818,
	0.502587,0.474851,0.722443,0.053266,0.046673,-0.004818,
	0.484849,0.48521,0.727662,0.052987,0.048416,-0.005781,
	0.484849,0.48521,0.727662,0.052987,0.048416,-0.005781,
	0.463202,0.500363,0.731492,0.052427,0.048943,-0.005781,
	0.480277,0.489774,0.727637,0.052668,0.047293,-0.004818,
	0.458764,0.50505,0.731068,0.052047,0.047891,-0.004818,
	0.480277,0.489774,0.727637,0.052668,0.047293,-0.004818,
	0.463202,0.500363,0.731492,0.052427,0.048943,-0.005781,
	0.463202,0.500363,0.731492,0.052427,0.048943,-0.005781,
	0.442255,0.515933,0.733637,0.051848,0.049449,-0.005781,
	0.458764,0.50505,0.731068,0.052047,0.047891,-0.004818,
	0.437903,0.520767,0.732832,0.051404,0.048464,-0.004818,
	0.458764,0.50505,0.731068,0.052047,0.047891,-0.004818,
	0.442255,0.515933,0.733637,0.051848,0.049449,-0.005781,
	0.442255,0.515933,0.733637,0.051848,0.049449,-0.005781,
	0.419718,0.534563,0.733539,0.05125,0.049933,-0.005781,
	0.437903,0.520767,0.732832,0.051404,0.048464,-0.004818,
	0.42249,0.532759,0.73326,0.050741,0.049011,-0.004818,
	0.437903,0.520767,0.732832,0.051404,0.048464,-0.004818,
	0.419718,0.534563,0.733539,0.05125,0.049933,-0.005781,
	0.42249,0.532759,0.73326,0.050741,0.049011,-0.004818,
	0.419718,0.534563,0.733539,0.05125,0.049933,-0.005781,
	0.403677,0.547538,0.732971,0.050057,0.049532,-0.004818,
	0.395847,0.555175,0.731496,0.050634,0.050393,-0.005781,
	0.403677,0.547538,0.732971,0.050057,0.049532,-0.004818,
	0.419718,0.534563,0.733539,0.05125,0.049933,-0.005781,
	0.403677,0.547538,0.732971,0.050057,0.049532,-0.004818,
	0.395847,0.555175,0.731496,0.050634,0.050393,-0.005781,
	0.38391,0.564835,0.730462,0.049354,0.050026,-0.004818,
	0.376177,0.572732,0.728333,0.050001,0.050829,-0.005781,
	0.38391,0.564835,0.730462,0.049354,0.050026,-0.004818,
	0.395847,0.555175,0.731496,0.050634,0.050393,-0.005781,
	0.38391,0.564835,0.730462,0.049354,0.050026,-0.004818,
	0.376177,0.572732,0.728333,0.050001,0.050829,-0.005781,
	0.375296,0.574093,0.727715,0.048634,0.050493,-0.004818,
	0.378691,0.573667,0.726291,0.049352,0.051241,-0.005781,
	0.375296,0.574093,0.727715,0.048634,0.050493,-0.004818,
	0.376177,0.572732,0.728333,0.050001,0.050829,-0.005781,
	0.375296,0.574093,0.727715,0.048634,0.050493,-0.004818,
	0.378691,0.573667,0.726291,0.049352,0.051241,-0.005781,
	0.405711,0.551851,0.728601,0.047882,0.051003,-0.004818,
	0.403275,0.554082,0.72826,0.048675,0.051693,-0.005781,
	0.405711,0.551851,0.728601,0.047882,0.051003,-0.004818,
	0.378691,0.573667,0.726291,0.049352,0.051241,-0.005781,
	0.403275,0.554082,0.72826,0.048675,0.051693,-0.005781,
	0.439698,0.520339,0.732061,0.048038,0.052198,-0.005781,
	0.405711,0.551851,0.728601,0.047882,0.051003,-0.004818,
	0.455156,0.505988,0.732672,0.047175,0.051576,-0.004818,
	0.405711,0.551851,0.728601,0.047882,0.051003,-0.004818,
	0.439698,0.520339,0.732061,0.048038,0.052198,-0.005781,
	0.439698,0.520339,0.732061,0.048038,0.052198,-0.005781,
	0.478388,0.479119,0.735928,0.047445,0.052755,-0.005781,
	0.455156,0.505988,0.732672,0.047175,0.051576,-0.004818,
	0.492434,0.463571,0.736621,0.046517,0.052206,-0.004818,
	0.455156,0.505988,0.732672,0.047175,0.051576,-0.004818,
	0.478388,0.479119,0.735928,0.047445,0.052755,-0.005781,
	0.478388,0.479119,0.735928,0.047445,0.052755,-0.005781,
	0.513034,0.434953,0.740008,0.0469,0.053359,-0.005781,
	0.492434,0.463571,0.736621,0.046517,0.052206,-0.004818,
	0.525496,0.418365,0.740827,0.045912,0.05289,-0.004818,
	0.492434,0.463571,0.736621,0.046517,0.052206,-0.004818,
	0.513034,0.434953,0.740008,0.0469,0.053359,-0.005781,
	0.513034,0.434953,0.740008,0.0469,0.053359,-0.005781,
	0.543337,0.388194,0.744372,0.046407,0.054006,-0.005781,
	0.525496,0.418365,0.740827,0.045912,0.05289,-0.004818,
	0.554068,0.370754,0.745352,0.045365,0.053623,-0.004818,
	0.525496,0.418365,0.740827,0.045912,0.05289,-0.004818,
	0.543337,0.388194,0.744372,0.046407,0.054006,-0.005781,
	0.543337,0.388194,0.744372,0.046407,0.054006,-0.005781,
	0.569031,0.339242,0.749078,0.04597,0.054691,-0.005781,
	0.554068,0.370754,0.745352,0.045365,0.053623,-0.004818,
	0.577912,0.321162,0.750248,0.044879,0.054399,-0.004818,
	0.554068,0.370754,0.745352,0.045365,0.053623,-0.004818,
	0.569031,0.339242,0.749078,0.04597,0.054691,-0.005781,
	0.569031,0.339242,0.749078,0.04597,0.054691,-0.005781,
	0.589896,0.288542,0.754166,0.04559,0.055411,-0.005781,
	0.577912,0.321162,0.750248,0.044879,0.054399,-0.004818,
	0.596848,0.270049,0.755544,0.044458,0.055214,-0.004818,
	0.577912,0.321162,0.750248,0.044879,0.054399,-0.004818,
	0.589896,0.288542,0.754166,0.04559,0.055411,-0.005781,
	0.589896,0.288542,0.754166,0.04559,0.055411,-0.005781,
	0.60577,0.236571,0.759656,0.045272,0.05616,-0.005781,
	0.596848,0.270049,0.755544,0.044458,0.055214,-0.004818,
	0.610753,0.217903,0.761249,0.044105,0.056061,-0.004818,
	0.596848,0.270049,0.755544,0.044458,0.055214,-0.004818,
	0.60577,0.236571,0.759656,0.045272,0.05616,-0.005781,
	0.60577,0.236571,0.759656,0.045272,0.05616,-0.005781,
	0.616557,0.183837,0.765546,0.045017,0.056932,-0.005781,
	0.610753,0.217903,0.761249,0.044105,0.056061,-0.004818,
	0.619574,0.165232,0.767351,0.043821,0.056936,-0.004818,
	0.610753,0.217903,0.761249,0.044105,0.056061,-0.004818,
	0.616557,0.183837,0.765546,0.045017,0.056932,-0.005781,
	0.616557,0.183837,0.765546,0.045017,0.056932,-0.005781,
	0.622238,0.13086,0.771813,0.044827,0.057723,-0.005781,
	0.619574,0.165232,0.767351,0.043821,0.056936,-0.004818,
	0.623333,0.112547,0.773815,0.04361,0.057831,-0.004818,
	0.619574,0.165232,0.767351,0.043821,0.056936,-0.004818,
	0.622238,0.13086,0.771813,0.044827,0.057723,-0.005781,
	0.622238,0.13086,0.771813,0.044827,0.057723,-0.005781,
	0.622921,0.078006,0.778386,0.044702,0.058527,-0.005781,
	0.623333,0.112547,0.773815,0.04361,0.057831,-0.004818,
	0.622674,0.06887,0.779444,0.043472,0.058741,-0.004818,
	0.623333,0.112547,0.773815,0.04361,0.057831,-0.004818,
	0.622921,0.078006,0.778386,0.044702,0.058527,-0.005781,
	0.615482,0.005518,0.788132,0.043409,0.05966,-0.004818,
	0.622674,0.06887,0.779444,0.043472,0.058741,-0.004818,
	0.622921,0.078006,0.778386,0.044702,0.058527,-0.005781,
	0.615482,0.005518,0.788132,0.043409,0.05966,-0.004818,
	0.622921,0.078006,0.778386,0.044702,0.058527,-0.005781,
	0.608032,-0.012608,0.793813,0.044645,0.059338,-0.005781,
	0.615482,0.005518,0.788132,0.043409,0.05966,-0.004818,
	0.608032,-0.012608,0.793813,0.044645,0.059338,-0.005781,
	0.587334,-0.078712,0.805508,0.043489,0.061186,-0.004818,
	0.563271,-0.124273,0.816873,0.044754,0.060662,-0.005781,
	0.587334,-0.078712,0.805508,0.043489,0.061186,-0.004818,
	0.608032,-0.012608,0.793813,0.044645,0.059338,-0.005781,
	0.587334,-0.078712,0.805508,0.043489,0.061186,-0.004818,
	0.563271,-0.124273,0.816873,0.044754,0.060662,-0.005781,
	0.528554,-0.194938,0.826214,0.043898,0.062655,-0.004818,
	0.498136,-0.2337,0.835012,0.045152,0.06193,-0.005781,
	0.528554,-0.194938,0.826214,0.043898,0.062655,-0.004818,
	0.563271,-0.124273,0.816873,0.044754,0.060662,-0.005781,
	0.528554,-0.194938,0.826214,0.043898,0.062655,-0.004818,
	0.498136,-0.2337,0.835012,0.045152,0.06193,-0.005781,
	0.454671,-0.294294,0.840634,0.044613,0.063997,-0.004818,
	0.419714,-0.3263,0.846976,0.04582,0.063079,-0.005781,
	0.454671,-0.294294,0.840634,0.044613,0.063997,-0.004818,
	0.498136,-0.2337,0.835012,0.045152,0.06193,-0.005781,
	0.454671,-0.294294,0.840634,0.044613,0.063997,-0.004818,
	0.419714,-0.3263,0.846976,0.04582,0.063079,-0.005781,
	0.369159,-0.377727,0.849143,0.0456,0.065145,-0.004818,
	0.33096,-0.403408,0.853069,0.046724,0.064053,-0.005781,
	0.369159,-0.377727,0.849143,0.0456,0.065145,-0.004818,
	0.419714,-0.3263,0.846976,0.04582,0.063079,-0.005781,
	0.369159,-0.377727,0.849143,0.0456,0.065145,-0.004818,
	0.33096,-0.403408,0.853069,0.046724,0.064053,-0.005781,
	0.273921,-0.44663,0.851756,0.046812,0.066043,-0.004818,
	0.233173,-0.466563,0.853199,0.04782,0.064804,-0.005781,
	0.273921,-0.44663,0.851756,0.046812,0.066043,-0.004818,
	0.33096,-0.403408,0.853069,0.046724,0.064053,-0.005781,
	0.273921,-0.44663,0.851756,0.046812,0.066043,-0.004818,
	0.233173,-0.466563,0.853199,0.04782,0.064804,-0.005781,
	0.169323,-0.502195,0.848015,0.048188,0.066646,-0.004818,
	0.126112,-0.516835,0.846745,0.049054,0.065295,-0.005781,
	0.169323,-0.502195,0.848015,0.048188,0.066646,-0.004818,
	0.233173,-0.466563,0.853199,0.04782,0.064804,-0.005781,
	0.169323,-0.502195,0.848015,0.048188,0.066646,-0.004818,
	0.126112,-0.516835,0.846745,0.049054,0.065295,-0.005781,
	0.054393,-0.544766,0.836822,0.04966,0.066926,-0.004818,
	0.00829,-0.554159,0.832369,0.050367,0.065502,-0.005781,
	0.054393,-0.544766,0.836822,0.04966,0.066926,-0.004818,
	0.126112,-0.516835,0.846745,0.049054,0.065295,-0.005781,
	0.054393,-0.544766,0.836822,0.04966,0.066926,-0.004818,
	0.00829,-0.554159,0.832369,0.050367,0.065502,-0.005781,
	-0.072758,-0.573144,0.816219,0.051157,0.066867,-0.004818,
	-0.12248,-0.576612,0.807785,0.051693,0.065415,-0.005781,
	-0.072758,-0.573144,0.816219,0.051157,0.066867,-0.004818,
	0.00829,-0.554159,0.832369,0.050367,0.065502,-0.005781,
	-0.072758,-0.573144,0.816219,0.051157,0.066867,-0.004818,
	-0.12248,-0.576612,0.807785,0.051693,0.065415,-0.005781,
	-0.241161,-0.582165,0.776482,0.052605,0.066474,-0.004818,
	-0.248853,-0.582215,0.774014,0.052967,0.065039,-0.005781,
	-0.241161,-0.582165,0.776482,0.052605,0.066474,-0.004818,
	-0.12248,-0.576612,0.807785,0.051693,0.065415,-0.005781,
	-0.248853,-0.582215,0.774014,0.052967,0.065039,-0.005781,
	-0.375277,-0.56983,0.731068,0.054127,0.064391,-0.005781,
	-0.241161,-0.582165,0.776482,0.052605,0.066474,-0.004818,
	-0.434459,-0.558606,0.706544,0.053934,0.065766,-0.004818,
	-0.241161,-0.582165,0.776482,0.052605,0.066474,-0.004818,
	-0.375277,-0.56983,0.731068,0.054127,0.064391,-0.005781,
	-0.375277,-0.56983,0.731068,0.054127,0.064391,-0.005781,
	-0.563066,-0.515371,0.646025,0.055116,0.063504,-0.005781,
	-0.434459,-0.558606,0.706544,0.053934,0.065766,-0.004818,
	-0.558162,-0.527957,0.640091,0.055031,0.064761,-0.004818,
	-0.434459,-0.558606,0.706544,0.053934,0.065766,-0.004818,
	-0.563066,-0.515371,0.646025,0.055116,0.063504,-0.005781,
	-0.558162,-0.527957,0.640091,0.055031,0.064761,-0.004818,
	-0.563066,-0.515371,0.646025,0.055116,0.063504,-0.005781,
	-0.627283,-0.480953,0.612536,0.055885,0.063727,-0.004818,
	-0.641198,-0.455323,0.617694,0.055885,0.06242,-0.005781,
	-0.627283,-0.480953,0.612536,0.055885,0.063727,-0.004818,
	-0.563066,-0.515371,0.646025,0.055116,0.063504,-0.005781,
	0.641198,-0.455323,0.617694,0.055885,0.06242,-0.005781,
	0.584317,-0.505368,0.634963,0.056655,0.063504,-0.005781,
	0.627283,-0.480953,0.612536,0.055885,0.063727,-0.004818,
	0.53575,-0.534369,0.653775,0.056739,0.064761,-0.004818,
	0.627283,-0.480953,0.612536,0.055885,0.063727,-0.004818,
	0.584317,-0.505368,0.634963,0.056655,0.063504,-0.005781,
	0.584317,-0.505368,0.634963,0.056655,0.063504,-0.005781,
	0.438876,-0.557947,0.704332,0.057644,0.064391,-0.005781,
	0.53575,-0.534369,0.653775,0.056739,0.064761,-0.004818,
	0.377865,-0.569077,0.730322,0.057837,0.065766,-0.004818,
	0.53575,-0.534369,0.653775,0.056739,0.064761,-0.004818,
	0.438876,-0.557947,0.704332,0.057644,0.064391,-0.005781,
	0.438876,-0.557947,0.704332,0.057644,0.064391,-0.005781,
	0.267975,-0.579599,0.769581,0.058804,0.065039,-0.005781,
	0.377865,-0.569077,0.730322,0.057837,0.065766,-0.004818,
	0.214084,-0.583805,0.78316,0.059165,0.066474,-0.004818,
	0.377865,-0.569077,0.730322,0.057837,0.065766,-0.004818,
	0.267975,-0.579599,0.769581,0.058804,0.065039,-0.005781,
	0.267975,-0.579599,0.769581,0.058804,0.065039,-0.005781,
	0.12248,-0.576612,0.807785,0.060078,0.065415,-0.005781,
	0.214084,-0.583805,0.78316,0.059165,0.066474,-0.004818,
	0.072758,-0.573144,0.816219,0.060613,0.066867,-0.004818,
	0.214084,-0.583805,0.78316,0.059165,0.066474,-0.004818,
	0.12248,-0.576612,0.807785,0.060078,0.065415,-0.005781,
	0.12248,-0.576612,0.807785,0.060078,0.065415,-0.005781,
	-0.00829,-0.554159,0.832369,0.061404,0.065502,-0.005781,
	0.072758,-0.573144,0.816219,0.060613,0.066867,-0.004818,
	-0.054393,-0.544766,0.836822,0.06211,0.066926,-0.004818,
	0.072758,-0.573144,0.816219,0.060613,0.066867,-0.004818,
	-0.00829,-0.554159,0.832369,0.061404,0.065502,-0.005781,
	-0.00829,-0.554159,0.832369,0.061404,0.065502,-0.005781,
	-0.126112,-0.516835,0.846745,0.062716,0.065295,-0.005781,
	-0.054393,-0.544766,0.836822,0.06211,0.066926,-0.004818,
	-0.169323,-0.502195,0.848015,0.063583,0.066646,-0.004818,
	-0.054393,-0.544766,0.836822,0.06211,0.066926,-0.004818,
	-0.126112,-0.516835,0.846745,0.062716,0.065295,-0.005781,
	0.622274,0.404734,0.670049,0.055885,0.043244,-0.004818,
	0.619748,0.407106,0.670953,0.055885,0.044839,-0.005781,
	0.611328,0.411243,0.676134,0.055414,0.04397,-0.004818,
	-0.622274,0.404734,0.670049,0.055885,0.043244,-0.004818,
	-0.611328,0.411243,0.676134,0.056357,0.04397,-0.004818,
	-0.619748,0.407106,0.670953,0.055885,0.044839,-0.005781,
	-0.600355,0.41774,0.681958,0.05631,0.04548,-0.005781,
	-0.619748,0.407106,0.670953,0.055885,0.044839,-0.005781,
	-0.611328,0.411243,0.676134,0.056357,0.04397,-0.004818,
	-0.611328,0.411243,0.676134,0.056357,0.04397,-0.004818,
	-0.583861,0.425853,0.691199,0.056856,0.044676,-0.004818,
	-0.600355,0.41774,0.681958,0.05631,0.04548,-0.005781,
	-0.573435,0.432324,0.695894,0.05676,0.046104,-0.005781,
	-0.600355,0.41774,0.681958,0.05631,0.04548,-0.005781,
	-0.583861,0.425853,0.691199,0.056856,0.044676,-0.004818,
	-0.583861,0.425853,0.691199,0.056856,0.044676,-0.004818,
	-0.557839,0.440321,0.703515,0.05738,0.045363,-0.004818,
	-0.573435,0.432324,0.695894,0.05676,0.046104,-0.005781,
	-0.547914,0.446817,0.707209,0.057232,0.046711,-0.005781,
	-0.573435,0.432324,0.695894,0.05676,0.046104,-0.005781,
	-0.557839,0.440321,0.703515,0.05738,0.045363,-0.004818,
	-0.557839,0.440321,0.703515,0.05738,0.045363,-0.004818,
	-0.528358,0.458036,0.714871,0.05793,0.046029,-0.004818,
	-0.547914,0.446817,0.707209,0.057232,0.046711,-0.005781,
	-0.525024,0.459644,0.716294,0.057728,0.047299,-0.005781,
	-0.547914,0.446817,0.707209,0.057232,0.046711,-0.005781,
	-0.528358,0.458036,0.714871,0.05793,0.046029,-0.004818,
	-0.525024,0.459644,0.716294,0.057728,0.047299,-0.005781,
	-0.528358,0.458036,0.714871,0.05793,0.046029,-0.004818,
	-0.507344,0.470385,0.722039,0.058245,0.047867,-0.005781,
	-0.502587,0.474851,0.722443,0.058505,0.046673,-0.004818,
	-0.507344,0.470385,0.722039,0.058245,0.047867,-0.005781,
	-0.528358,0.458036,0.714871,0.05793,0.046029,-0.004818,
	-0.507344,0.470385,0.722039,0.058245,0.047867,-0.005781,
	-0.502587,0.474851,0.722443,0.058505,0.046673,-0.004818,
	-0.484849,0.48521,0.727662,0.058784,0.048416,-0.005781,
	-0.480277,0.489774,0.727637,0.059103,0.047293,-0.004818,
	-0.484849,0.48521,0.727662,0.058784,0.048416,-0.005781,
	-0.502587,0.474851,0.722443,0.058505,0.046673,-0.004818,
	-0.484849,0.48521,0.727662,0.058784,0.048416,-0.005781,
	-0.480277,0.489774,0.727637,0.059103,0.047293,-0.004818,
	-0.463202,0.500363,0.731492,0.059343,0.048943,-0.005781,
	-0.458764,0.50505,0.731068,0.059724,0.047891,-0.004818,
	-0.463202,0.500363,0.731492,0.059343,0.048943,-0.005781,
	-0.480277,0.489774,0.727637,0.059103,0.047293,-0.004818,
	-0.463202,0.500363,0.731492,0.059343,0.048943,-0.005781,
	-0.458764,0.50505,0.731068,0.059724,0.047891,-0.004818,
	-0.442255,0.515933,0.733637,0.059922,0.049449,-0.005781,
	-0.437903,0.520767,0.732832,0.060366,0.048464,-0.004818,
	-0.442255,0.515933,0.733637,0.059922,0.049449,-0.005781,
	-0.458764,0.50505,0.731068,0.059724,0.047891,-0.004818,
	-0.442255,0.515933,0.733637,0.059922,0.049449,-0.005781,
	-0.437903,0.520767,0.732832,0.060366,0.048464,-0.004818,
	-0.421867,0.532005,0.734165,0.06052,0.049933,-0.005781,
	-0.417553,0.537009,0.732987,0.06103,0.049011,-0.004818,
	-0.421867,0.532005,0.734165,0.06052,0.049933,-0.005781,
	-0.437903,0.520767,0.732832,0.060366,0.048464,-0.004818,
	-0.421867,0.532005,0.734165,0.06052,0.049933,-0.005781,
	-0.417553,0.537009,0.732987,0.06103,0.049011,-0.004818,
	-0.401898,0.548661,0.73311,0.061136,0.050393,-0.005781,
	-0.397577,0.553859,0.731555,0.061714,0.049532,-0.004818,
	-0.401898,0.548661,0.73311,0.061136,0.050393,-0.005781,
	-0.417553,0.537009,0.732987,0.06103,0.049011,-0.004818,
	-0.401898,0.548661,0.73311,0.061136,0.050393,-0.005781,
	-0.397577,0.553859,0.731555,0.061714,0.049532,-0.004818,
	-0.382209,0.565977,0.730469,0.061769,0.050829,-0.005781,
	-0.377837,0.571394,0.728525,0.062416,0.050026,-0.004818,
	-0.382209,0.565977,0.730469,0.061769,0.050829,-0.005781,
	-0.397577,0.553859,0.731555,0.061714,0.049532,-0.004818,
	-0.382209,0.565977,0.730469,0.061769,0.050829,-0.005781,
	-0.377837,0.571394,0.728525,0.062416,0.050026,-0.004818,
	-0.37698,0.573856,0.727032,0.062418,0.051241,-0.005781,
	-0.379372,0.571846,0.727371,0.063137,0.050493,-0.004818,
	-0.37698,0.573856,0.727032,0.062418,0.051241,-0.005781,
	-0.377837,0.571394,0.728525,0.062416,0.050026,-0.004818,
	-0.379372,0.571846,0.727371,0.063137,0.050493,-0.004818,
	-0.405711,0.551851,0.728601,0.063888,0.051003,-0.004818,
	-0.37698,0.573856,0.727032,0.062418,0.051241,-0.005781,
	-0.403275,0.554082,0.72826,0.063095,0.051693,-0.005781,
	-0.37698,0.573856,0.727032,0.062418,0.051241,-0.005781,
	-0.405711,0.551851,0.728601,0.063888,0.051003,-0.004818,
	-0.403275,0.554082,0.72826,0.063095,0.051693,-0.005781,
	-0.405711,0.551851,0.728601,0.063888,0.051003,-0.004818,
	-0.439698,0.520339,0.732061,0.063732,0.052198,-0.005781,
	-0.455156,0.505988,0.732672,0.064596,0.051576,-0.004818,
	-0.439698,0.520339,0.732061,0.063732,0.052198,-0.005781,
	-0.405711,0.551851,0.728601,0.063888,0.051003,-0.004818,
	-0.439698,0.520339,0.732061,0.063732,0.052198,-0.005781,
	-0.455156,0.505988,0.732672,0.064596,0.051576,-0.004818,
	-0.478388,0.479119,0.735928,0.064326,0.052755,-0.005781,
	-0.492434,0.463571,0.736621,0.065254,0.052206,-0.004818,
	-0.478388,0.479119,0.735928,0.064326,0.052755,-0.005781,
	-0.455156,0.505988,0.732672,0.064596,0.051576,-0.004818,
	-0.478388,0.479119,0.735928,0.064326,0.052755,-0.005781,
	-0.492434,0.463571,0.736621,0.065254,0.052206,-0.004818,
	-0.513034,0.434953,0.740008,0.06487,0.053359,-0.005781,
	-0.525496,0.418365,0.740827,0.065859,0.05289,-0.004818,
	-0.513034,0.434953,0.740008,0.06487,0.053359,-0.005781,
	-0.492434,0.463571,0.736621,0.065254,0.052206,-0.004818,
	-0.513034,0.434953,0.740008,0.06487,0.053359,-0.005781,
	-0.525496,0.418365,0.740827,0.065859,0.05289,-0.004818,
	-0.543337,0.388194,0.744372,0.065363,0.054006,-0.005781,
	-0.554068,0.370754,0.745352,0.066406,0.053623,-0.004818,
	-0.543337,0.388194,0.744372,0.065363,0.054006,-0.005781,
	-0.525496,0.418365,0.740827,0.065859,0.05289,-0.004818,
	-0.543337,0.388194,0.744372,0.065363,0.054006,-0.005781,
	-0.554068,0.370754,0.745352,0.066406,0.053623,-0.004818,
	-0.569031,0.339242,0.749078,0.065801,0.054691,-0.005781,
	-0.577912,0.321162,0.750248,0.066892,0.054399,-0.004818,
	-0.569031,0.339242,0.749078,0.065801,0.054691,-0.005781,
	-0.554068,0.370754,0.745352,0.066406,0.053623,-0.004818,
	-0.569031,0.339242,0.749078,0.065801,0.054691,-0.005781,
	-0.577912,0.321162,0.750248,0.066892,0.054399,-0.004818,
	-0.589896,0.288542,0.754166,0.06618,0.055411,-0.005781,
	-0.596848,0.270049,0.755544,0.067313,0.055214,-0.004818,
	-0.589896,0.288542,0.754166,0.06618,0.055411,-0.005781,
	-0.577912,0.321162,0.750248,0.066892,0.054399,-0.004818,
	-0.589896,0.288542,0.754166,0.06618,0.055411,-0.005781,
	-0.596848,0.270049,0.755544,0.067313,0.055214,-0.004818,
	-0.60577,0.236571,0.759656,0.066498,0.05616,-0.005781,
	-0.610753,0.217903,0.761249,0.067666,0.056061,-0.004818,
	-0.60577,0.236571,0.759656,0.066498,0.05616,-0.005781,
	-0.596848,0.270049,0.755544,0.067313,0.055214,-0.004818,
	-0.60577,0.236571,0.759656,0.066498,0.05616,-0.005781,
	-0.610753,0.217903,0.761249,0.067666,0.056061,-0.004818,
	-0.616557,0.183837,0.765546,0.066754,0.056932,-0.005781,
	-0.619574,0.165232,0.767351,0.067949,0.056936,-0.004818,
	-0.616557,0.183837,0.765546,0.066754,0.056932,-0.005781,
	-0.610753,0.217903,0.761249,0.067666,0.056061,-0.004818,
	-0.616557,0.183837,0.765546,0.066754,0.056932,-0.005781,
	-0.619574,0.165232,0.767351,0.067949,0.056936,-0.004818,
	-0.622238,0.13086,0.771813,0.066944,0.057723,-0.005781,
	-0.623333,0.112547,0.773815,0.068161,0.057831,-0.004818,
	-0.622238,0.13086,0.771813,0.066944,0.057723,-0.005781,
	-0.619574,0.165232,0.767351,0.067949,0.056936,-0.004818,
	-0.622238,0.13086,0.771813,0.066944,0.057723,-0.005781,
	-0.623333,0.112547,0.773815,0.068161,0.057831,-0.004818,
	-0.622921,0.078006,0.778386,0.067068,0.058527,-0.005781,
	-0.622674,0.06887,0.779444,0.068298,0.058741,-0.004818,
	-0.622921,0.078006,0.778386,0.067068,0.058527,-0.005781,
	-0.623333,0.112547,0.773815,0.068161,0.057831,-0.004818,
	-0.622921,0.078006,0.778386,0.067068,0.058527,-0.005781,
	-0.622674,0.06887,0.779444,0.068298,0.058741,-0.004818,
	-0.615482,0.005518,0.788132,0.068362,0.05966,-0.004818,
	-0.622921,0.078006,0.778386,0.067068,0.058527,-0.005781,
	-0.615482,0.005518,0.788132,0.068362,0.05966,-0.004818,
	-0.608032,-0.012608,0.793813,0.067125,0.059338,-0.005781,
	-0.615482,0.005518,0.788132,0.068362,0.05966,-0.004818,
	-0.587334,-0.078712,0.805508,0.068281,0.061186,-0.004818,
	-0.608032,-0.012608,0.793813,0.067125,0.059338,-0.005781,
	-0.563271,-0.124273,0.816873,0.067016,0.060662,-0.005781,
	-0.608032,-0.012608,0.793813,0.067125,0.059338,-0.005781,
	-0.587334,-0.078712,0.805508,0.068281,0.061186,-0.004818,
	-0.587334,-0.078712,0.805508,0.068281,0.061186,-0.004818,
	-0.528554,-0.194938,0.826214,0.067873,0.062655,-0.004818,
	-0.563271,-0.124273,0.816873,0.067016,0.060662,-0.005781,
	-0.498136,-0.2337,0.835012,0.066618,0.06193,-0.005781,
	-0.563271,-0.124273,0.816873,0.067016,0.060662,-0.005781,
	-0.528554,-0.194938,0.826214,0.067873,0.062655,-0.004818,
	-0.528554,-0.194938,0.826214,0.067873,0.062655,-0.004818,
	-0.454671,-0.294294,0.840634,0.067158,0.063997,-0.004818,
	-0.498136,-0.2337,0.835012,0.066618,0.06193,-0.005781,
	-0.419714,-0.3263,0.846976,0.065951,0.063079,-0.005781,
	-0.498136,-0.2337,0.835012,0.066618,0.06193,-0.005781,
	-0.454671,-0.294294,0.840634,0.067158,0.063997,-0.004818,
	-0.454671,-0.294294,0.840634,0.067158,0.063997,-0.004818,
	-0.369159,-0.377727,0.849143,0.06617,0.065145,-0.004818,
	-0.419714,-0.3263,0.846976,0.065951,0.063079,-0.005781,
	-0.33096,-0.403408,0.853069,0.065047,0.064053,-0.005781,
	-0.419714,-0.3263,0.846976,0.065951,0.063079,-0.005781,
	-0.369159,-0.377727,0.849143,0.06617,0.065145,-0.004818,
	-0.369159,-0.377727,0.849143,0.06617,0.065145,-0.004818,
	-0.273921,-0.44663,0.851756,0.064959,0.066043,-0.004818,
	-0.33096,-0.403408,0.853069,0.065047,0.064053,-0.005781,
	-0.233173,-0.466563,0.853199,0.063951,0.064804,-0.005781,
	-0.33096,-0.403408,0.853069,0.065047,0.064053,-0.005781,
	-0.273921,-0.44663,0.851756,0.064959,0.066043,-0.004818,
	-0.273921,-0.44663,0.851756,0.064959,0.066043,-0.004818,
	-0.169323,-0.502195,0.848015,0.063583,0.066646,-0.004818,
	-0.233173,-0.466563,0.853199,0.063951,0.064804,-0.005781
};
static const struct gllist frame={GL_N3F_V3F,GL_TRIANGLES,648,data,NULL};
const struct gllist *companion_heart=&frame;
