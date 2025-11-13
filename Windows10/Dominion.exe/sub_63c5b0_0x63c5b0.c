// 函数: sub_63c5b0
// 地址: 0x63c5b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg2
void* edi = arg4
int32_t ecx
int32_t var_c = ecx

if (edi != 0)
    void* ebx_1 = arg3
    
    while (esi != ebx_1)
        void var_8
        void var_6
        int32_t eax_1 = sub_63c7e0(arg1, esi, ebx_1, &arg3, &var_8, &var_6, &arg4)
        
        if (eax_1 != 0)
            if (eax_1 == 3)
                void* ebx_2 = ebx_1 - esi
                
                if (edi u< ebx_2)
                    ebx_2 = edi
                
                esi += ebx_2
            
            break
        
        if (arg4 == &var_6)
            edi -= 1
        
        esi = arg3
        
        if (edi == 0)
            return esi - arg2

return esi - arg2
