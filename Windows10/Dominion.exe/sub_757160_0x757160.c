// 函数: sub_757160
// 地址: 0x757160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = arg1
uint32_t var_3c = eax_2

if (*(eax_2 + 4) == 0)
    int32_t* eax_3 = sub_64bfd0(0x1cdc8)
    eax_3[3] += 1
    int32_t* edi_1
    
    if (eax_3[4] != 0xffffffff)
        if (*eax_3 == 0)
            sub_64be70(eax_3)
        
        edi_1 = *eax_3
        *eax_3 = *edi_1
    else
        edi_1 = sub_687730(0x1cdc8)
    
    memset(edi_1, 0, 0x1cdc8)
    *(var_3c + 4) = sub_75a410(edi_1)
    eax_2 = var_3c

int128_t var_38
int128_t* i = &var_38
__builtin_memcpy(&var_38, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x80\xbb\x00\x00\x"
"06\x00\x00\x00\x44\xac\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x44\xac\x00\x
        00", 
    0x30)
int32_t var_8

do
    int32_t edi_2 = *(i + 4)
    int32_t ebx_1 = *i
    int32_t eax_7 = sub_75acf0(*(eax_2 + 4), 1, ebx_1, edi_2, 0, 2)
    
    if (eax_7 == 0)
        int32_t var_4c_2 = edi_2
        int32_t var_50_2 = ebx_1
        *(var_3c + 8) = 1
        int32_t eax_8 = sub_63b7f0("Sound initialized (%d, %d)")
        CookieCheckFunction(eax_8)
        return eax_8
    
    int32_t var_4c_1 = eax_7
    int32_t var_50_1 = edi_2
    int32_t var_54_3 = ebx_1
    sub_63b7f0("Sound failed to init (%d, %d) error:%d")
    i += 8
    eax_2 = var_3c
while (i != &var_8)

*(eax_2 + 8) = 0
CookieCheckFunction(eax_2)
return eax_2
