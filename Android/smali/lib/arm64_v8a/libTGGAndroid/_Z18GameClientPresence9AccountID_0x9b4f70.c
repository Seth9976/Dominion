// 函数: _Z18GameClientPresence9AccountID
// 地址: 0x9b4f70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = GetClient()

for (int32_t* i =
        *(*(x0 + 0x7590) + ((zx.q(*(x0 + 0x7598)) & (zx.q(x19) | zx.q(x19 s>> 4))) << 3)); i != 0; 
        i = *(i + 0x18))
    if (*i == x19)
        if (i[2] == 3)
            break
        
        void* x0_2 = GetClient()
        
        if (i[4] + *GetClient() - (*(x0_2 + 0x75a0) + *(x0_2 + 0x75a8)) s> 0xea60)
            return 2
        
        return 1

return 3
