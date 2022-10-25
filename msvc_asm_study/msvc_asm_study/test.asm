.data
	value qword 12345
	mystr byte "hello MYFriend"

.code
	GetValue proc
	mov rax, value
	ret
	GetValue endp

	GetValue2 proc
	lea rax, byte ptr[mystr]
	ret
	GetValue2 endp
end
