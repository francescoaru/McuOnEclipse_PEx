%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (WriteString)
%;**     Description :
%;**         Write to buffer
%include Common\GeneralParameters.inc(27)
%;**         BufferIndex%ParBufferIndex %>27 - Buffer/channel to be used.
%;** %>29 0 for terminal.
%;**       * s%Pars %>27 - Pointer to 
%;**     Returns     :
%;**         ---%RetVal %>27 - Number of bytes which have been stored in
%;** %>29 the "Up"-buffer.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine