// 函数: sub_4ddbb0
// 地址: 0x4ddbb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
char* __return_addr_1
char* edx
__return_addr_1, edx = __chkstk(0x3364)
char* ebx = edx
char* var_4 = ebx
memcpy(ebx, 0x8dce08, 0x1990)
char i = *__return_addr_1

if (i == 0)
    return i

char* __return_addr_2 = __return_addr_1

if (i == 0x2d)
    void arg_3c
    void arg_19cc
    memcpy(&arg_3c, sub_4deeb0(&arg_19cc), 0x1990)
    return memcpy(ebx, &arg_3c, 0x1990)

do
    i = *__return_addr_2
    __return_addr_2 = &__return_addr_2[1]
while (i != 0)

__return_addr = __return_addr_1
char* _Str1_1
sub_4dc550(&_Str1_1, &__return_addr)
__builtin_memset(&__return_addr, 0, 8)
int32_t arg_24
int32_t eax = sub_4dc830(&arg_24, __return_addr, __return_addr_2 - &__return_addr_2[1])

for (char* _Str1 = _Str1_1; _Str1 != arg_24; _Str1 = _Str1_1)
    if (_strnicmp(_Str1, "Colonies", arg1) == 0)
        ebx = var_4
        *(ebx + 0xbfc) = 1
    else if (_strnicmp(_Str1, "Colony", arg1) == 0)
        ebx = var_4
        *(ebx + 0xbfc) = 1
    else if (_strnicmp(_Str1, "Platinum", arg1) == 0)
        ebx = var_4
        *(ebx + 0xbfc) = 1
    else
        int32_t eax_4 = _strnicmp(_Str1, "No Colonies", arg1)
        int32_t eax_5
        
        if (eax_4 != 0)
            eax_5 = _strnicmp(_Str1, "No Platinum", arg1)
        
        if (eax_4 == 0 || eax_5 == 0)
            ebx = var_4
            *(ebx + 0xbfc) = 2
        else if (_strnicmp(_Str1, "Shelters", arg1) != 0)
            ebx = var_4
            
            if (_strnicmp(_Str1, "No Shelters", arg1) == 0)
                *(ebx + 0xc00) = 2
        else
            ebx = var_4
            *(ebx + 0xc00) = 1
    
    eax = sub_4dc830(&_Str1_1, arg2, arg3)

return sub_4dd810(eax, ebx, 0x17, __return_addr_1)
