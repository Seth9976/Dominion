// 函数: sub_6f0bd0
// 地址: 0x6f0bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg3 = 0
arg3[1] = 0
void* eax
int32_t edx
eax, edx = sub_6ee800()

if (eax != 0)
    int32_t i = 0
    
    if (*(eax + 8) s> 0)
        do
            edx.b = 0
            int32_t eax_1
            int32_t edx_1
            eax_1, edx_1 = sub_6eebe0(i, edx.b)
            int32_t eax_3
            int32_t edx_2
            edx_2:eax_3 = sx.q(eax_1 - arg2)
            
            if ((eax_3 ^ edx_2) - edx_2 s< 5)
                int32_t eax_7
                edx_2:eax_7 = sx.q(edx_1 - arg4)
                int32_t eax_9 = (eax_7 ^ edx_2) - edx_2
                
                if (eax_9 s< 5)
                    *arg3 = 1
                    arg3[1] = i
                    return eax_9
            
            edx_2.b = 1
            int32_t eax_10
            int32_t edx_3
            eax_10, edx_3 = sub_6eebe0(i, edx_2.b)
            int32_t eax_12
            edx:eax_12 = sx.q(eax_10 - arg2)
            
            if ((eax_12 ^ edx) - edx s< 5)
                int32_t eax_16
                edx:eax_16 = sx.q(edx_3 - arg4 - 5)
                int32_t eax_18 = (eax_16 ^ edx) - edx
                
                if (eax_18 s< 0xa)
                    arg3[1] = i
                    *arg3 = 2
                    return eax_18
            
            i += 1
        while (i s< *(eax + 8))
    
    void* var_20
    GetWindowRect(GetDlgItem(data_147d470, 0x80), &var_20)
    ScreenToClient(data_147d470, &var_20)
    POINT point
    ScreenToClient(data_147d470, &point)
    eax = var_20 + 0x16
    int32_t var_1c
    
    if (arg2 s>= eax && arg2 s<= point.x - 8 && arg4 s>= var_1c + 0xa && arg4 s<= point.y - 0x14)
        *arg3 = 3

return eax
