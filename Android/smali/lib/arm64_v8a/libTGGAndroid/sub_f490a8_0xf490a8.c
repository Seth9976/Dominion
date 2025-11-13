// 函数: sub_f490a8
// 地址: 0xf490a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1
void* x22 = arg1[1]
int64_t* x19 = arg1

if (x22 != x20)
    bool cond:0_1
    
    do
        void* x23_1 = *(x22 - 0x18)
        
        if (x23_1 != 0)
            char* x8_1 = *(x22 - 0x10)
            void* x0_1
            
            if (x8_1 == x23_1)
                x0_1 = x23_1
            else
                char* x24_1 = x8_1
                
                do
                    x24_1 = &x24_1[-0x18]
                    
                    if ((zx.d(*x24_1) & 1) != 0)
                        operator delete(*(x8_1 - 8))
                    
                    x8_1 = x24_1
                while (x23_1 != x24_1)
                
                x0_1 = *(x22 - 0x18)
            
            *(x22 - 0x10) = x23_1
            operator delete(x0_1)
        
        arg1 = *(x22 - 0x30)
        *(x22 - 0x38) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
        
        if (arg1 != 0)
            *(x22 - 0x28) = arg1
            operator delete(arg1)
        
        if ((zx.d(*(x22 - 0x50)) & 1) != 0)
            operator delete(*(x22 - 0x40))
        
        cond:0_1 = x22 - 0x50 == x20
        x22 -= 0x50
    while (not(cond:0_1))

x19[1] = x20
