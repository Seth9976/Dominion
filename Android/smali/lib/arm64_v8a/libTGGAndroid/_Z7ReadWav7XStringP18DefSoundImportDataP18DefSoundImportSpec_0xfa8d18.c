// 函数: _Z7ReadWav7XStringP18DefSoundImportDataP18DefSoundImportSpec
// 地址: 0xfa8d18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = fopen(XString::operator char const*(), "rb")
void buf_2
char const* const x0_10

if (fread(&buf_2, 0xc, 1, fp) != 1)
    x0_10 = "failed to read wav file (riff): %s"
else
    int32_t buf_1
    
    if (fread(&buf_1, 8, 1, fp) == 1)
        size_t i
        
        do
            int32_t buf_4 = buf_1
            int32_t var_54
            
            if (buf_4 == 0x20746d66)
                int16_t buf
                
                if (fread(&buf, sx.q(var_54), 1, fp) != 1)
                    x0_10 = "failed to read wav format: %s"
                    goto label_fa8e44
                
                if (zx.d(buf) != 1)
                    x0_10 = "unsupported wav format: %s"
                    goto label_fa8e44
                
                int16_t var_da
                *(arg2 + 4) = sx.d(var_da)
                int16_t var_e6
                *(arg2 + 8) = sx.d(var_e6)
                int32_t var_e4
                *arg2 = var_e4
            else
                if (buf_4 == 0x61746164)
                    *(arg2 + 0x10) = 1
                    *(arg2 + 0x14) = var_54
                    *(arg2 + 0xc) = var_54
                    int64_t buf_3 = XMalloc(var_54)
                    size_t size = sx.q(*(arg2 + 0x14))
                    *(arg2 + 0x18) = buf_3
                    
                    if (fread(buf_3, size, 1, fp) != 1)
                        XTrace("failed to read wav data: %s")
                        XFree(*(arg2 + 0x18))
                        goto label_fa8e4c
                    
                    fclose(fp)
                    int32_t x8_4 = *arg3
                    
                    if (x8_4 != 1)
                        if (x8_4 != 2)
                            XString::operator char const*()
                            XTrace("can't convert sound storage type %s")
                        else
                            SoundConvertPcmToOgg(arg2, arg3)
                    
                    return 1
                
                if (fseek(fp, sx.q(var_54), 1) != 0)
                    x0_10 = "failed to read unknown wav data: %s"
                    goto label_fa8e44
            i = fread(&buf_1, 8, 1, fp)
        while (i == 1)
    
    x0_10 = "failed to read wav file (wave): %s"

label_fa8e44:
XTrace(x0_10)
label_fa8e4c:
fclose(fp)
return 0
