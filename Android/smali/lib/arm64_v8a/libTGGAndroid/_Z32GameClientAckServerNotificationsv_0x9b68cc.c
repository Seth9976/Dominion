// 函数: _Z32GameClientAckServerNotificationsv
// 地址: 0x9b68cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetClient()
int32_t* x20 = result + 0x78f8
uint64_t x8 = zx.q(*x20)

if (x8.d != 0)
    void* i = *(result + 0x78f0)
    void* result_1 = result
    int64_t x8_1 = i + x8 * 0xc
    
    do
        if (zx.d(*(i + 0xa)) != 0)
            while (i != 0xffffffff)
                int64_t var_38 = *i
                result = GetClient()
                
                if (*(result + 0x18) == 3)
                    result = NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42cf, 8, &var_38)
                
                void* i_1 = *(result_1 + 0x78f0)
                
                if (i == 0)
                    i = i_1
                else
                    i += 0xc
                
                int64_t x8_3 = i_1 + zx.q(*x20) * 0xc
                
                if (i u>= x8_3)
                    break
                
                while (zx.d(*(i + 0xa)) == 0)
                    i += 0xc
                    
                    if (i u>= x8_3)
                        return result
            
            break
        
        i += 0xc
    while (i u< x8_1)

return result
