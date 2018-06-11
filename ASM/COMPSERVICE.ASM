format PE GUI 4.0

include 'D:\FASM\INCLUDE\win32a.inc'

;       There is no sections. Compiler gonna make
;       section 'flat' automatically without making
;       sections 'data' and 'code'.

;       Initialise 2 variables - Text and Title

invoke MessageBoxA,0,Text,Title,MB_ICONQUESTION+MB_YESNOCANCEL
cmp eax,IDNO
je close
cmp eax,IDYES
jne exit

open:
invoke mciSendString,OpenROM,0,0,0
jmp exit

close: 
invoke mciSendString,CloseROM,0,0,0

exit:
invoke ExitProcess,0

Text db "Do you need some place for beer?",0
Title db "Computer service",0

OpenROM db 'set cdaudio door open',0
CloseROM db 'set cdaudio door closed',0

;       Placing imported files here in this section

data import

library kernel32,'KERNEL32.DLL',\
                user32,'USER32.DLL',\
                winmm,'WINMM.DLL'

import kernel32,\
ExitProcess,'ExitProcess'

import user32,\
MessageBoxA,'MessageBoxA'

import winmm,\
mciSendString,'mciSendStringA'

end data