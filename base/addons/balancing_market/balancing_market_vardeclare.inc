
$ifi not %BALANCINGRUNPURPOSE%==TSOREDISPATCH $goto NO_TSOREDISPATCH
POSITIVE VARIABLE VGE_T_DOWN(Y,AAA,G,S,T) 'Down Dispatch of the commited electricity dispatch with respect to previous runs';
POSITIVE VARIABLE VGH_T_DOWN(Y,AAA,G,S,T) 'Down Dispatch of the commited heat dispatch with respect to previous runs';
$ifi %HYDROGEN%==yes  POSITIVE VARIABLE VGH2_T_DOWN(Y,AAA,G,S,T) 'Down Dispatch of the commited hydrogen dispatch with respect to previous runs';
$ifi %HYDROGEN%==yes  POSITIVE VARIABLE VGBIOMETHANE_T_DOWN(Y,AAA,G,S,T) 'Down Dispatch of the commited synthetic natural gas dispatch with respect to previous runs';
$ifi %HYDROGEN%==yes  POSITIVE VARIABLE VGBIOGASMETHANATION_T_DOWN(Y,AAA,G,S,T) 'Down Dispatch of the commited biogas methanation dispatch with respect to previous runs';
$ifi %HYDROGEN%==yes  POSITIVE VARIABLE VGBIOGASUPGRADING_T_DOWN(Y,AAA,G,S,T) 'Down Dispatch of the commited biogas upgrading dispatch with respect to previous runs';
$label NO_TSOREDISPATCH
