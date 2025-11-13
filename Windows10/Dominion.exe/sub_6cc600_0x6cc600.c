// 函数: sub_6cc600
// 地址: 0x6cc600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = data_147d2c4
int32_t ebx
ebx.b = data_147d214 == 1
(*(*data_147b070 + 0x90))(data_cf65f8, 0)
sub_645e30()
uint32_t result = sub_6494f0(ebx)

if (esi != 4)
    if (data_147b074 == 1)
        glFlush()
    
    result = data_cf65b8
    
    if (*(result + 0x1c) != 0 && data_ccf6e6 == 0)
        void* eax_1 = data_147abe8
        
        if (eax_1 != 0)
            result = *(eax_1 + 0x1c) u>> 0xd
        
        if (eax_1 == 0 || (result.b & 1) == 0)
            int32_t edx_1 = data_147d1d4
            int32_t eax_3 = *data_147b070
            
            if (data_147d214 != 1)
                return (*(eax_3 + 0x94))(*((edx_1 << 2) + &data_147d1b4), 
                    *((edx_1 << 2) + &data_147d1bc))
            
            return (*(eax_3 + 0x94))(*((edx_1 << 2) + &data_147d1b8), 
                *((edx_1 << 2) + &data_147d1c0))

return result
