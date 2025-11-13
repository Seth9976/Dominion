// 函数: sub_63d9d0
// 地址: 0x63d9d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
char* ebx = arg3
int32_t edi = 0
int32_t* var_8_1 = arg1

if (ebx s<= 0)
    return 

char* esi_1 = arg2

do
    char* eax
    eax.b = *esi_1
    
    if (eax.b == 0)
        break
    
    if (eax.b u>= 0x80)
        arg1.b = eax.b
        arg1.b &= 0xe0
        
        if (arg1.b != 0xc0)
            arg1.b = eax.b
            arg1.b &= 0xf0
            
            if (arg1.b != 0xe0)
                eax.b &= 0xf8
                
                if (eax.b != 0xf0)
                    sub_63b870(eax, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                        "C:\x\ax2017\Engine\Xutf8.cpp", 0x21c, "Xutf8_peek_next")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
    
    arg3 = esi_1
    sub_63dcd0(var_8_1, sub_5a0d00(&arg3))
    eax, arg1 = sub_5a0db0(esi_1)
    edi += 1
    esi_1 = eax
while (edi s< ebx)
