// 函数: sub_107e3e8
// 地址: 0x107e3e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
void* x22 = arg6

if (arg6 != 0)
    goto label_107e434

void var_88
int64_t x0_26 = sub_107bd58(arg1, &var_88, 0x10000)
int32_t x24_1

if (x0_26 == -0x80)
    x24_1 = -0x80
else if ((x0_26 & 0xffffffff80000000) != 0)
    x24_1 = -0x84
else
    x22 = &var_88
label_107e434:
    vorbis_info_init(arg2)
    vorbis_comment_init(arg3)
    arg1[0x10].d = 2
    void var_b8
    
    if (ogg_page_bos(x22) != 0)
        int32_t i
        
        do
            if (arg4 != 0)
                int64_t* x28_1 = *arg4
                int32_t x27_1 = *arg5
                int32_t x0_5 = ogg_page_serialno(x22)
                
                if (x28_1 != 0 && x27_1 != 0)
                    while (*x28_1 != sx.q(x0_5))
                        x27_1 -= 1
                        x28_1 = &x28_1[1]
                        
                        if (x27_1 == 0)
                            goto label_107e494
                    
                    int64_t x0_27 = *arg4
                    
                    if (x0_27 != 0)
                        free(x0_27)
                    
                    *arg4 = 0
                    *arg5 = 0
                    x24_1 = -0x85
                    goto label_107e6c8
                
            label_107e494:
                int32_t x0_7 = ogg_page_serialno(x22)
                uint64_t x27_2 = sx.q(*arg5) + 1
                *arg5 = x27_2.d
                int64_t oldmem = *arg4
                int64_t x0_9
                
                if (oldmem == 0)
                    x0_9 = malloc(8)
                    *arg4 = x0_9
                else
                    x0_9 = realloc(oldmem, x27_2 << 3)
                    *arg4 = x0_9
                    x27_2 = zx.q(*arg5)
                
                *(x0_9 + (sx.q(x27_2.d - 1) << 3)) = sx.q(x0_7)
            
            if (arg1[0x10].d s<= 2)
                ogg_stream_reset_serialno(&arg1[0x15], zx.q(ogg_page_serialno(x22)))
                ogg_stream_pagein(&arg1[0x15], x22)
                
                if (ogg_stream_packetout(&arg1[0x15], &var_b8) s>= 1
                        && vorbis_synthesis_idheader(&var_b8) != 0)
                    arg1[0x10].d = 3
                    
                    if (vorbis_synthesis_headerin(arg2, arg3, &var_b8) != 0)
                    label_107e718:
                        x24_1 = -0x85
                        goto label_107e6c8
            
            int64_t x0_21 = sub_107bd58(arg1, x22, 0x10000)
            
            if (x0_21 == -0x80)
                x24_1 = -0x80
                goto label_107e6c8
            
            if ((x0_21 & 0xffffffff80000000) != 0)
                goto label_107e6c0
            
            if (arg1[0x10].d == 3 && arg1[0x44] == sx.q(ogg_page_serialno(x22)))
                ogg_stream_pagein(&arg1[0x15], x22)
                break
            
            i = ogg_page_bos(x22)
        while (i != 0)
    
    if (arg1[0x10].d != 3)
    label_107e6c0:
        x24_1 = -0x84
    label_107e6c8:
        vorbis_info_clear(arg2)
        vorbis_comment_clear(arg3)
        arg1[0x10].d = 2
    else
        int32_t x25_2 = 0
        int32_t x27_4 = 0
        
        while (true)
            if (x25_2 s> 1)
                x24_1 = 0
                break
            
            int32_t x0_30 = ogg_stream_packetout(&arg1[0x15], &var_b8)
            
            if (x0_30 == 0xffffffff)
                goto label_107e718
            
            if (x0_30 == 0)
                if ((sub_107bd58(arg1, x22, 0x10000) & 0xffffffff80000000) != 0)
                    goto label_107e718
                
                while (true)
                    if (arg1[0x44] == sx.q(ogg_page_serialno(x22)))
                        ogg_stream_pagein(&arg1[0x15], x22)
                        x24_1 = 0
                        
                        if (x25_2 s< 2)
                            break
                        
                        goto label_107e6e4
                    
                    if (ogg_page_bos(x22) != 0)
                        if (x27_4 != 0)
                            goto label_107e718
                        
                        x27_4 = 1
                    
                    x24_1 = -0x85
                    
                    if ((sub_107bd58(arg1, x22, 0x10000) & 0xffffffff80000000) != 0)
                        goto label_107e6c8
            else
                x25_2 += 1
                int32_t x0_32 = vorbis_synthesis_headerin(arg2, arg3, &var_b8)
                x24_1 = x0_32
                
                if (x0_32 != 0)
                    goto label_107e6c8

label_107e6e4:

if (*(x26 + 0x28) == x8)
    return zx.q(x24_1)

__stack_chk_fail()
noreturn
