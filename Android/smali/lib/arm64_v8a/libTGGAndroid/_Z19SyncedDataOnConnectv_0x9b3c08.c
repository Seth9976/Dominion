// 函数: _Z19SyncedDataOnConnectv
// 地址: 0x9b3c08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gSyncedData

if (x8 == 0)
    return 

int32_t i = 0
int64_t var_30

do
    int32_t* j_1 = *(*(x8 + 0x10) + (zx.q(i) << 3))
    
    if (j_1 != 0)
        int32_t* j
        
        do
            j = *(j_1 + 0x18)
            
            if (j == 0)
                int32_t x11_2 = *j_1
                int32_t x10_1 = *(x8 + 0x18)
                int32_t x11_5 = ((x11_2 | x11_2 s>> 4) & x10_1) + 1
                
                do
                    if (x11_5 u> x10_1)
                        j = nullptr
                        
                        if (*(j_1 + 8) != 0)
                            goto label_9b3c8c
                        
                        goto label_9b3cd8
                    
                    j = *(*(x8 + 0x10) + (zx.q(x11_5) << 3))
                    x11_5 += 1
                while (j == 0)
            
            if (*(j_1 + 8) == 0)
            label_9b3cd8:
                var_30.d = *j_1
                int64_t var_28_1 = *(j_1 + 0x10)
                void* x0_2 = GetClient()
                
                if (*(x0_2 + 0x18) == 3)
                    NetworkSendMessage(zx.q(*(x0_2 + 0x14)), 0xf42d1, 0x10, &var_30)
            
        label_9b3c8c:
            x8 = *gSyncedData
            j_1 = j
        while (j != 0)
        break
    
    i += 1
while (i u<= *(x8 + 0x18))

var_30 = *(x8 + 0x20)
void* x0 = GetClient()

if (*(x0 + 0x18) == 3)
    NetworkSendMessage(zx.q(*(x0 + 0x14)), 0xf42d0, 8, &var_30)
