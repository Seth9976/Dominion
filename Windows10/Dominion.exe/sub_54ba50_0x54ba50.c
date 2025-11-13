// 函数: sub_54ba50
// 地址: 0x54ba50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax
int32_t ecx
eax, ecx = sub_56b800()
int32_t var_2c = ecx
void* result = sub_5624a0(eax, 0x3e9)

if (result.b != 0)
    int16_t eax_1 = sub_56b800()
    void* eax_2 = sub_573400()
    uint32_t esi_2 = zx.d(eax_1)
    int32_t ebx_1 = *(eax_2 + 0xc)
    void* edi = *(eax_2 + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_3 = esi_2 * 0x64
    void* var_14
    sub_576e90(eax_3, edi, &var_14, ebx_1, *(eax_3 + edi + 0x1a4c), 0)
    void* var_2c_1 = var_14
    result = sub_564f00(esi_2)
    void* result_1 = result
    
    if (result_1 != 0)
        uint32_t esi_3 = zx.d(result_1.w)
        void* eax_5 = *(sub_573400() + 4)
        var_14 = eax_5
        
        if (esi_3 u>= 0x320)
            sub_591930()
            eax_5 = var_14
        
        int32_t ebx_2 = esi_3 * 0x64
        char eax_6 = sub_5754f0(eax_5, *(ebx_2 + eax_5 + 0x1a4c), eax_5, 4, 0)
        
        if (eax_6 == 0)
            void* eax_8 = *(sub_573400() + 4)
            var_14 = eax_8
            
            if (esi_3 u>= 0x320)
                sub_591930()
                eax_8 = var_14
            
            result = sub_5754f0(eax_8, *(ebx_2 + eax_8 + 0x1a4c), eax_8, 2, 0)
        
        if (eax_6 != 0 || result.b != 0)
            result = sub_56f260(result_1)
            
            if (result.b != 0)
                void* eax_10 = *(sub_573400() + 4)
                var_14 = eax_10
                int32_t var_1c_1
                void* eax_14
                int32_t edx_5
                
                if (esi_3 u< 0x320)
                    var_1c_1 = *(ebx_2 + eax_10 + 0x1a58)
                    var_14 = nullptr
                    int32_t var_18_2 = 0
                    eax_14 = sub_573400()
                    edx_5 = *(eax_14 + 4)
                else
                    sub_591930()
                    var_1c_1 = *(var_14 + ebx_2 + 0x1a58)
                    var_14 = nullptr
                    int32_t var_18_1 = 0
                    void* eax_12 = sub_573400()
                    int32_t eax_13 = *(eax_12 + 4)
                    sub_591930()
                    eax_14 = eax_12
                    edx_5 = eax_13
                
                sub_582d10(eax_14, *(ebx_2 + edx_5 + 0x1a70), *(eax_14 + 4), result_1, var_1c_1, 
                    0xb, 0x3ee, nullptr, *(eax_14 + 0x28), *(eax_14 + 0x2c), *(eax_14 + 0x30), 0, 
                    0, nullptr, 0, var_14, nullptr)
                result = sub_567f20(arg1)
                
                if (result.b == 0)
                    var_14 = nullptr
                    void* eax_16 = sub_573400()
                    int32_t ecx_10 = *(eax_16 + 4)
                    
                    if (esi_3 u>= 0x320)
                        sub_591930()
                    
                    return sub_582d10(eax_16, *(ebx_2 + ecx_10 + 0x1a70), *(eax_16 + 4), result_1, 
                        0x3ee, 0xb, var_1c_1, nullptr, *(eax_16 + 0x28), *(eax_16 + 0x2c), 
                        *(eax_16 + 0x30), 0, 0, nullptr, 0, nullptr, var_14)

return result
