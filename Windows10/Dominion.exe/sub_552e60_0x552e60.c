// 函数: sub_552e60
// 地址: 0x552e60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1978)
int32_t edi
int32_t var_18 = edi
void* i_1
sub_561af0(__security_cookie ^ &i_1, 0, 1, 0)
int32_t arg_58[0x320]
memset(&arg_58, 0, 0xc84)
uint32_t edi_1

for (void* i = sub_566920(edi); i != 0; i = sub_566920(edi_1))
    edi_1 = zx.d(i.w)
    void* i_2 = *(sub_573400() + 4)
    i_1 = i_2
    
    if (edi_1 u>= 0x320)
        sub_591930()
        i_2 = i_1
    
    int32_t eax_4 = edi_1 * 0x64
    char eax_5
    int32_t ecx_1
    eax_5, ecx_1 = sub_5754f0(eax_4, *(eax_4 + i_2 + 0x1a4c), i_2, 2, 0)
    
    if (eax_5 != 0)
        int32_t arg_4 = 0
        var_4.q = 0
        int64_t arg_c
        __builtin_memset(&arg_c, 0, 0x1c)
        int128_t arg_28 = 0x44.o
        int32_t var_1c_1 = ecx_1
        int128_t arg_38 = i.o
        int128_t arg_48 = arg1.o
        int32_t eax_10 = sub_569720(&arg_28, 0x3ec, i, 2, &arg_28)
        
        if (eax_10 != 0x3ec)
            if (eax_10 != 2)
                sub_63b870(eax_10, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Dominion\code\DomCards_Prosperity.cpp", 0x20, 
                    "DiscardOrTrash")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            void* eax_12 = sub_573400()
            i_1 = i
            int32_t var_c_1 = *(eax_12 + 0xc)
            
            if (i != 0 && sub_582de0(eax_12, i, *(eax_12 + 4), 0x3ee) == 0)
                int32_t var_1c_2 = 0
                int32_t arg_ce0 = 0x3ee
                sub_590de0(&i_1, 1, &arg_ce0, 0x12, i_1, __return_addr)
        else
            i_1 = i
            
            if (i != 0)
                void* eax_11 = sub_573400()
                *(eax_11 + 0xc)
                *(eax_11 + 4)
                sub_582eb0(&i_1, 1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
        
        break
    
    void* eax_6 = arg2
    
    if (eax_6 s>= 0x320)
        sub_591930()
        eax_6 = arg2
    
    arg_58[eax_6] = i
    arg2 += 1

void* eax_8 = sub_573400()
*(eax_8 + 0xc)
*(eax_8 + 4)
uint32_t result = sub_582eb0(&arg_58, arg2, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
