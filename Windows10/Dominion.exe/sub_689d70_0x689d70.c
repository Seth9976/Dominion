// 函数: sub_689d70
// 地址: 0x689d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
void* result = data_147abf4

if (arg3 != 0)
    uint32_t esi_1 = zx.d(arg3.w)
    
    if (esi_1 u< *(result + 4))
        void* esi_3 = esi_1 * 0x64 + *result
        
        if (*(esi_3 + 0x60) == arg3 && esi_3 != 0)
            void* result_1 = *(esi_3 + 0x20)
            
            if (result_1 != 0xffffffff)
            label_689dce:
                result = (*(*data_147abf8 + 0x10))(result_1, arg2, arg5, arg4)
                
                if (result == 0xfffffffe)
                    (*(*data_147abf8 + 0xc))(*(esi_3 + 0x20))
                    result = (*(*data_147abf8 + 8))(zx.d(*(esi_3 + 6)), 0)
                    *(esi_3 + 0x20) = result
            else
                result = (*(*data_147abf8 + 8))(zx.d(*(esi_3 + 6)), 0)
                result_1 = result
                *(esi_3 + 0x20) = result_1
                
                if (result_1 != 0xffffffff)
                    goto label_689dce

return result
