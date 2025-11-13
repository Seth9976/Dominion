// 函数: _Z25SubmitPendingDailyResultsv
// 地址: 0x9b3d1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetActiveProfile()
int32_t* x20 = result + 0x7748
void* result_1 = result
int32_t i = 0

do
    int32_t* j_1 = *(*(result + 0x7740) + (zx.q(i) << 3))
    
    if (j_1 != 0)
        int32_t* j
        
        do
            j = *(j_1 + 0x20)
            
            if (j == 0)
                int32_t x11 = *j_1
                int32_t x9_1 = *x20
                int32_t x11_3 = ((x11 | x11 s>> 4) & x9_1) + 1
                
                do
                    if (x11_3 u> x9_1)
                        j = nullptr
                        
                        if (j_1[6] != 0)
                            goto label_9b3d7c
                        
                        goto label_9b3dc4
                    
                    j = *(*(result_1 + 0x7740) + (zx.q(x11_3) << 3))
                    x11_3 += 1
                while (j == 0)
            
            if (j_1[6] == 0)
            label_9b3dc4:
                int32_t var_40 = *j_1
                int32_t x9_4 = j_1[2]
                int32_t x9_6
                
                if (x9_4 u> 4 || (1 << x9_4 & 0x1a) == 0)
                    int32_t x9_8 = j_1[3]
                    int32_t x10_2 = j_1[4]
                    
                    x9_6 = x9_8 s> x10_2 ? x9_8 : x10_2
                    
                    if (x9_6 u<= 1)
                        int32_t x8_2 = j_1[5]
                        
                        x9_6 = x8_2 u> 1 ? x8_2 : 1
                else
                    x9_6 = 0xa
                
                int32_t var_3c_1 = x9_6
                int64_t var_38_1 = -1
                result = GetClient()
                
                if (*(result + 0x18) == 3)
                    result = NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42bb, 0x10, &var_40)
            
        label_9b3d7c:
            j_1 = j
        while (j != 0)
        break
    
    i += 1
while (i u<= *x20)

return result
