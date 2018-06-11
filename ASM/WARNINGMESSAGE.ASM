include 'D:\FASM\INCLUDE/win32ax.inc'

.data
Caption db 'Охуенно опасный вирус',0
Text db 'Здравствуйте! Я - очень опасный вирус.',13,\
        "Я ещё не умею самостоятельно приносить вред компьютеру, поэтому Вы должны мне помочь.",13,\
        " Совершите, пожалуйста, следующие действия:",13,\
        "1.Отправьте заранее этот файл всем своим знакомым",13,\        
	"2.Сотрите у себя папки C:\Windows и C:\Program Files",13,\
        "Заранее спасибо",0

.code
start:
invoke MessageBox,0,Text,Caption,MB_ICONHAND
invoke ExitProcess,0

.end start