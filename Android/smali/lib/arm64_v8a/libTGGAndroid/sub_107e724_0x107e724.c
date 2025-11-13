// 函数: sub_107e724
// 地址: 0x107e724
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t x25 = arg1[0x44].d
void var_78
int64_t result

if ((sub_107bd58(arg1, &var_78, -1) & 0xffffffff80000000) != 0)
    result = 0
else
    int64_t x24_1 = 0
    int64_t x26_1 = -1
    int64_t x0_13
    
    do
        if (ogg_page_bos(&var_78) != 0)
            break
        
        if (ogg_page_serialno(&var_78) == x25)
            ogg_stream_pagein(&arg1[0x15], &var_78)
            void var_a8
            int32_t i = ogg_stream_packetout(&arg1[0x15], &var_a8)
            int64_t x22_1
            
            if (i == 0)
                x22_1 = x26_1
            else
                do
                    int64_t x0_8
                    
                    if (i s>= 1)
                        x0_8 = vorbis_packet_blocksize(arg2, &var_a8)
                        x22_1 = x0_8
                    
                    if (i s< 1 || (x0_8 & 0xffffffff80000000) != 0)
                        x22_1 = x26_1
                    else if (x26_1 != -1)
                        x24_1 += (x22_1 + x26_1) s>> 2
                    
                    i = ogg_stream_packetout(&arg1[0x15], &var_a8)
                    x26_1 = x22_1
                while (i != 0)
            
            if (ogg_page_granulepos(&var_78) != -1)
                x24_1 = ogg_page_granulepos(&var_78) - x24_1
                break
            
            x26_1 = x22_1
        
        x0_13 = sub_107bd58(arg1, &var_78, -1)
    while ((x0_13 & 0xffffffff80000000) == 0)
    result = x24_1 & not.q(x24_1 s>> 0x3f)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
