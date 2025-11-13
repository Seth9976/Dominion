// 函数: __emutls_get_address
// 地址: 0x110194c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = arg1[2]
int64_t* oldmem_1

if (x22 == 0)
    pthread_once(0x24bc028, sub_1101b44)
    pthread_mutex_lock(0x24bc038)
    x22 = arg1[2]
    
    if (x22 == 0)
        x22 = data_24bc030 + 1
        data_24bc030 = x22
        arg1[2] = x22
    
    pthread_mutex_unlock(0x24bc038)
    oldmem_1 = pthread_getspecific(zx.q(data_24bc024))
    
    if (oldmem_1 != 0)
        goto label_1101980
    
    goto label_1101a34

oldmem_1 = pthread_getspecific(zx.q(data_24bc024))
int64_t* oldmem
int64_t x24_1

if (oldmem_1 == 0)
label_1101a34:
    x24_1 = ((x22 + 0x11) & 0xfffffffffffffff0) - 2
    size_t x21_1 = x24_1 << 3
    int64_t* oldmem_3 = malloc(x21_1 + 0x10)
    
    if (oldmem_3 != 0)
        oldmem = oldmem_3
        memset(&oldmem_3[2], 0, x21_1)
        *oldmem = 1
    label_1101a64:
        oldmem[1] = x24_1
        pthread_setspecific(zx.q(data_24bc024), oldmem)
    label_1101a7c:
        void* result = oldmem[x22 + 1]
        
        if (result != 0)
            return result
        
        int64_t x8_8 = arg1[1]
        int64_t x20_1
        
        x20_1 = x8_8 u> 8 ? x8_8 : 8
        
        if ((x20_1 & (x20_1 - 1)) == 0)
            size_t x21_2 = *arg1
            int64_t x0_8 = malloc(x20_1 + 7 + x21_2)
            
            if (x0_8 != 0)
                result = (x0_8 + x20_1 + 7) & neg.q(x20_1)
                *(result - 8) = x0_8
                int64_t x1_3 = arg1[3]
                
                if (x1_3 == 0)
                    memset(result, x1_3.d, x21_2)
                else
                    memcpy(result, x1_3, x21_2)
                
                oldmem[x22 + 1] = result
                return result
else
label_1101980:
    int64_t x21 = oldmem_1[1]
    oldmem = oldmem_1
    
    if (x21 u>= x22)
        goto label_1101a7c
    
    x24_1 = ((x22 + 0x11) & 0xfffffffffffffff0) - 2
    int64_t* oldmem_2 = realloc(oldmem, (x24_1 << 3) + 0x10)
    
    if (oldmem_2 != 0)
        oldmem = oldmem_2
        memset(&oldmem_2[x21 + 2], 0, (x24_1 - x21) << 3)
        goto label_1101a64
abort()
noreturn
