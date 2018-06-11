format PE GUI 4.0

include 'D:\FASM\INCLUDE/WIN32A.INC'

invoke mciSendString,_cd_state,_ret,5,0
invoke lstrcmp,_ret,_ret_open,0
cmp eax,0
je close

open:
invoke mciSendString,_cd_open,0,0,0
jmp exit
close:
invoke mciSendString,_cd_close,0,0,0
exit:
invoke ExitProcess,0

_cd_state db 'status cdaudio mode',0
_cd_open db 'set cdaudio door open',0
_cd_close db 'set cdaudio door closed',0
_ret_open db 'open',0
_ret rb 5

data import

library kernel32,'KERNEL32.DLL',\
user32,'USER32.DLL',\
winmm,'WINMM.DLL'

import kernel32,\
ExitProcess,'ExitProcess',\
GetWindowsDirectory,'GetWindowsDirectory',\
lstrcmp,'lstrcmpA'

import user32,\
MessageBoxA,'MessageBoxA'

import winmm,\
mciSendString,'mciSendStringA',\
PlaySound,'PlaySoundA'
end data