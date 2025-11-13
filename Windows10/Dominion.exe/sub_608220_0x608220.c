// 函数: sub_608220
// 地址: 0x608220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* ecx
void* edx
ecx, edx = __chkstk(0x334c)
__security_cookie
char* i_2
char* i = i_2
int32_t eax_2 = 0
int32_t edx_1 = *(edx + 0xaf0)

if (edx_1 s> 0)
    while (*(edx + (eax_2 << 2)) != i)
        eax_2 += 1
        
        if (eax_2 s>= edx_1)
            goto label_60826c
    
    goto label_6082b5

label_60826c:
int32_t var_8
sub_608170(&var_8, edx_1, edx, &var_8, &var_4)
void* eax_4 = sub_571b30(i, 0x18)
char* result
bool cond:0_1

if (((*(eax_4 + 0x98) & 0x7f000400) | (*(eax_4 + 0x9c) & 0x940)) == 0)
    result = arg1
    cond:0_1 = var_4 s< result
else
    result = arg2
    cond:0_1 = var_8 s< result

if (cond:0_1 || result s<= 0)
label_6082b5:
    int32_t eax_7 = 0
    
    while (true)
        if (*(edx + (eax_7 << 2)) == i)
            *(edx + 0xaf0) -= 1
            *(edx + (eax_7 << 2)) = *(edx + (*(edx + 0xaf0) << 2))
            *(edx + (*(edx + 0xaf0) << 2)) = 0
            break
        
        eax_7 += 1
        
        if (eax_7 s>= 0x2bc)
            int32_t eax_8 = *(edx + 0xaf0)
            
            if (eax_8 != 0x2bc)
                *(edx + (eax_8 << 2)) = i
                *(edx + 0xaf0) += 1
            
            break
    
    void* eax_12 = sub_4bbdb0()
    void arg_1c
    void arg_19ac
    memcpy(&arg_19ac, sub_4e49d0(eax_12, &arg_1c), 0x1990)
    void arg_25b0
    memset(&arg_25b0, 0, 0xaf0)
    memcpy(&arg_25b0, edx, *(edx + 0xaf0) << 2)
    result = sub_4e4cb0(eax_12)
    void* const esi_1 = ecx
    
    if (esi_1 != 0)
        void* ebx_1 = esi_1 + 0x58ec
        
        if (ebx_1 == edx)
            int32_t eax_16
            uint32_t edx_2
            eax_16, edx_2 = _Xtime_get_ticks()
            uint32_t i_4
            char* edx_3
            i_4, edx_3 = __alldiv(eax_16, edx_2, 0x989680, 0)
            int32_t edi_1 = *(esi_1 + 0x63dc)
            *(esi_1 + 0x427c) = edx_3
            *(esi_1 + 0x4278) = i_4
            esi_1 = ebx_1
            arg1 = edx_3
            i_2 = i_4
            int32_t i_3 = edi_1 << 2
            int32_t eax_17 = 0
            
            if (i_3 != 0)
                int32_t i_1
                
                do
                    char ecx_9 = *esi_1
                    esi_1 += 1
                    eax_17 = eax_17 u>> 8 ^ *(((zx.d(ecx_9) ^ zx.d(eax_17.b)) << 2) + &data_7ffd70)
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            void* ecx_12 = data_cc8d5c
            int32_t arg_18 = eax_17
            arg2 = ebx_1
            int32_t arg_14 = edi_1
            
            if (ecx_12 == 0)
                sub_63b870(eax_17, &data_801800, "gClient", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_68b720(&i_2, 0xf42c4, *(ecx_12 + 0x14), data_1597d48, &i_2)
        
        data_cc8dc8
        result = sub_4d8ad0(esi_1)

CookieCheckFunction(result)
return result
