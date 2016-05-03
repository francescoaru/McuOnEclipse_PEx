%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetTerminal)
%;**     Description :
%;**          Sets the terminal to be used for output on channel 0.
%include Common\GeneralParameters.inc(27)
%;**         TerminalId%ParTerminalId %>27 - Terminal ID, 0..15
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine