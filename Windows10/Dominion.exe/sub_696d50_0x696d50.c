// 函数: sub_696d50
// 地址: 0x696d50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

FILE* _Stream_1
void* ecx
char eax = sub_694630(ecx, &_Stream_1)

if (eax == 0)
    return eax

FILE* _Stream = _Stream_1

if (fseek(_Stream, arg3, 0) != 0)
    fclose(_Stream)
    int32_t eax_2
    eax_2.b = 0
    return eax_2

int32_t ebx
ebx.b = fread(arg2, arg4, 1, _Stream) == 1
fclose(_Stream)
int32_t eax_4
eax_4.b = ebx.b
return eax_4
