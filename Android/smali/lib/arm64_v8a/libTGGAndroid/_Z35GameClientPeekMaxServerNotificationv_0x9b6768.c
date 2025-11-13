// 函数: _Z35GameClientPeekMaxServerNotificationv
// 地址: 0x9b6768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x10 = zx.q(*(x0 + 0x78f8))

if (x10.d != 0)
    void* i_1 = *(x0 + 0x78f0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0xa)) != 0)
            if (i == 0xffffffff)
                break
            
            void* result = nullptr
            int64_t x10_1 = i_1 + x10 * 0xc
            
            do
                if (result == 0 || *(result + 4) s< *(i + 4))
                    result = i
                
                if (i == 0)
                    i = i_1
                else
                    i += 0xc
                
                if (i u>= x10_1)
                    break
                
                while (zx.d(*(i + 0xa)) == 0)
                    i += 0xc
                    
                    if (i u>= x10_1)
                        return result
            while (i != 0xffffffff)
            
            return result
        
        i += 0xc
    while (i u< i_1 + x10 * 0xc)

return nullptr
