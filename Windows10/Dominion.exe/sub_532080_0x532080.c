// 函数: sub_532080
// 地址: 0x532080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1924)
__security_cookie
int32_t edi
int32_t var_14 = edi
int32_t esi = 0
__return_addr = sub_5641d0()
int32_t arg_190c = 0
void* arg_c84 = nullptr
int32_t ebx = 0
int32_t arg_4[0x320]
int32_t arg_c8c[0x320]

for (int32_t i = sub_566920(edi); i != 0; i = sub_566920(i))
    var_4 = *(sub_573400() + 4)
    uint32_t eax_6 = zx.d(i.w)
    uint32_t var_8 = eax_6
    
    if (eax_6 u>= 0x320)
        sub_591930()
        eax_6 = var_8
    
    if (*(eax_6 * 0x64 + var_4 + 0x1a4c) != __return_addr)
        if (esi s>= 0x320)
            sub_591930()
        
        arg_c8c[esi] = i
        ebx += 1
        esi = arg_190c + 1
        arg_190c = esi
        
        if (ebx == 3)
            int32_t eax_12 = *(*(sub_573400() + 4) + 0x1504)
            
            if (eax_12 != 3 && eax_12 != 5 && eax_12 != 4 && eax_12 != 6)
                sub_61b1b0(eax_12, 7, eax_12 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 
                    0, 0, 0, 0)
            
            break
    else
        void* eax_8 = arg_c84
        
        if (eax_8 s>= 0x320)
            sub_591930()
            eax_8 = arg_c84
        
        arg_4[eax_8] = i
        arg_c84 += 1

sub_569500(&arg_c8c, 0x3ee)
void* eax_13 = sub_573400()
*(eax_13 + 0xc)
*(eax_13 + 4)
uint32_t result = sub_582eb0(&arg_4, arg_c84, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
