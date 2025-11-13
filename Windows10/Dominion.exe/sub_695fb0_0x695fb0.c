// 函数: sub_695fb0
// 地址: 0x695fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char* _FileName_1 = arg3
char* _FileName = _FileName_1
sub_69db50(arg3)
FILE* _Stream = fopen(_FileName_1, "wb")

if (_Stream == 0)
    _Stream.b = 0
    CookieCheckFunction(_Stream)
    return _Stream

int32_t var_c = arg2[2]
int32_t _Buffer
__builtin_strncpy(&_Buffer, "KCPX", 4)
int32_t var_10 = 7

if (fwrite(&_Buffer, 0xc, 1, _Stream) != 1)
label_696043:
    _FileName_1.b = 0
    fclose(_Stream)
    _unlink(_FileName)
else
    uint32_t eax_4 = sub_695be0(arg2, _Stream)
    
    if (eax_4.b == 0)
        goto label_696043
    
    if (sub_695c80(eax_4, _Stream, arg2, arg4) == 0)
        goto label_696043
    
    _FileName_1.b = 1
    fclose(_Stream)

int32_t eax_6
eax_6.b = _FileName_1.b
CookieCheckFunction(eax_6)
return eax_6
