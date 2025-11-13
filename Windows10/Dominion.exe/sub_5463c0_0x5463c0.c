// 函数: sub_5463c0
// 地址: 0x5463c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_18 = nullptr
int32_t edi
int32_t i_1 = sub_566920(edi)
int32_t var_c98[0x320]

for (int32_t i = i_1; i != 0; i = i_1)
    if (sub_5680f0(i_1, 3, i.w, 4) != 0)
        void* eax_6 = *(*(sub_573400() + 4) + 0x1504)
        
        if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
            eax_6 = sub_61b1b0(eax_6, 7, eax_6 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 
                0, 0, 0, 0, 0)
        
        sub_562400(eax_6, 0x3ee, i, 0)
        break
    
    void* eax_3 = var_18
    
    if (eax_3 s>= 0x320)
        sub_591930()
        eax_3 = var_18
    
    var_c98[eax_3] = i
    var_18 += 1
    i_1 = sub_566920(edi)

void* eax_7 = sub_573400()
*(eax_7 + 0xc)
*(eax_7 + 4)
uint32_t result = sub_582eb0(&var_c98, var_18, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
