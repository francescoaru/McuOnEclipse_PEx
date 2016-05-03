%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralEvent.inc (OnTimeSet)
%;**     Description :
%;**         Called in the event of a new time set
%include Common\GeneralParameters.inc(27)
%;**         hour%Parhour %>27 - The hour to be set
%;**         minute%Parminute %>27 - The minute to be set
%;**         second%Parsecond %>27 - The second to be set
%;**         hSecond%ParhSecond %>27 - The 0.01 second to be set
%include Common\GeneralReturnNothing.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine