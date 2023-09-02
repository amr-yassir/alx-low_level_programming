	global	main
	extern	printf
main:
	mov		edi, msg
	mov		eax, 0
	call	printf

msg: db 'Hello, Holberton\n',0
