// 函数: spSkeletonBinary_readAttachment
// 地址: 0xfc0bc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x10 = *arg2
void* x8 = &x10[1]
*arg2 = x8
uint32_t x11 = zx.d(*x10)
int32_t x9 = x11 & 0x7f

if ((x11 & 0x80) != 0)
    x8 = &x10[2]
    *arg2 = x8
    uint32_t x11_1 = zx.d(x10[1])
    x9 = (0xffffc07f & x9) | (0x7f & x11_1) << 7
    
    if ((x11_1 & 0x80) != 0)
        x8 = &x10[3]
        *arg2 = x8
        uint32_t x11_2 = zx.d(x10[2])
        x9 = (0xffe03fff & x9) | (0x7f & x11_2) << 0xe
        
        if ((x11_2 & 0x80) != 0)
            x8 = &x10[4]
            *arg2 = x8
            uint32_t x11_3 = zx.d(x10[3])
            x9 = (0xf01fffff & x9) | (0x7f & x11_3) << 0x15
            
            if ((x11_3 & 0x80) != 0)
                x8 = &x10[5]
                *arg2 = x8
                x9 = (0xfffffff & x9) | (0xf & zx.d(x10[4])) << 0x1c

char* x9_2

if (x9 == 0)
    x9_2 = nullptr
else
    x9_2 = *(*(arg6 + 0x28) + (sx.q(x9 - 1) << 3))

*arg2 = x8 + 1
uint64_t x10_4 = zx.q(*x8)
char* x24

x24 = x9_2 == 0 ? arg5 : x9_2

if (x10_4.d u> 6)
    return nullptr

void* const result

switch (x10_4)
    case 0
        *arg2 = x8 + 2
        uint32_t x10_5 = zx.d(*(x8 + 1))
        int32_t x9_4 = x10_5 & 0x7f
        
        if ((x10_5 & 0x80) != 0)
            *arg2 = x8 + 3
            uint32_t x10_7 = zx.d(*(x8 + 2))
            x9_4 = (0xffffc07f & x9_4) | (0x7f & x10_7) << 7
            
            if ((x10_7 & 0x80) != 0)
                *arg2 = x8 + 4
                uint32_t x10_9 = zx.d(*(x8 + 3))
                x9_4 = (0xffe03fff & x9_4) | (0x7f & x10_9) << 0xe
                
                if ((x10_9 & 0x80) != 0)
                    *arg2 = x8 + 5
                    uint32_t x10_11 = zx.d(*(x8 + 4))
                    x9_4 = (0xf01fffff & x9_4) | (0x7f & x10_11) << 0x15
                    
                    if ((x10_11 & 0x80) != 0)
                        *arg2 = x8 + 6
                        x9_4 = (0xfffffff & x9_4) | (0xf & zx.d(*(x8 + 5))) << 0x1c
        
        char* x23_1
        
        if (x9_4 != 0)
            x23_1 = *(*(arg6 + 0x28) + (sx.q(x9_4 - 1) << 3))
        
        int64_t x0_3
        char* x1
        int64_t x22_1
        
        if (x9_4 == 0 || x23_1 == 0)
            x0_3 = _spMalloc(strlen(x24) + 1, 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2b3)
            x22_1 = x0_3
            x1 = x24
        else
            x0_3 = _spMalloc(strlen(x23_1) + 1, 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2b6)
            x22_1 = x0_3
            x1 = x23_1
        
        strcpy(x0_3, x1)
        void* result_3 = spAttachmentLoader_createAttachment(*(arg1 + 8), arg3, 0, x24, x22_1)
        *(result_3 + 0x28) = x22_1
        char* x8_50 = *arg2
        result = result_3
        *arg2 = &x8_50[1]
        uint32_t x9_58 = zx.d(*x8_50)
        *arg2 = &x8_50[2]
        char x10_45 = x8_50[1]
        *arg2 = &x8_50[3]
        uint32_t x11_15 = zx.d(x8_50[2])
        *arg2 = &x8_50[4]
        *(result_3 + 0x40) = zx.d(x8_50[3])
            | (0xffffff & ((0xffff00ff & x9_58 << 0x10) | zx.d(x10_45) << 8 | x11_15)) << 8
        char* x8_53 = *arg2
        *arg2 = &x8_53[1]
        uint32_t x9_63 = zx.d(*x8_53)
        *arg2 = &x8_53[2]
        char x10_47 = x8_53[1]
        *arg2 = &x8_53[3]
        uint32_t x11_17 = zx.d(x8_53[2])
        *arg2 = &x8_53[4]
        *(result_3 + 0x30) = *arg1 * float.s(zx.d(x8_53[3])
            | (0xffffff & ((0xffff00ff & x9_63 << 0x10) | zx.d(x10_47) << 8 | x11_17)) << 8)
        char* x8_56 = *arg2
        *arg2 = &x8_56[1]
        uint32_t x9_68 = zx.d(*x8_56)
        *arg2 = &x8_56[2]
        char x10_49 = x8_56[1]
        *arg2 = &x8_56[3]
        uint32_t x11_19 = zx.d(x8_56[2])
        *arg2 = &x8_56[4]
        *(result_3 + 0x34) = *arg1 * float.s(zx.d(x8_56[3])
            | (0xffffff & ((0xffff00ff & x9_68 << 0x10) | zx.d(x10_49) << 8 | x11_19)) << 8)
        char* x8_59 = *arg2
        *arg2 = &x8_59[1]
        uint32_t x9_73 = zx.d(*x8_59)
        *arg2 = &x8_59[2]
        char x10_51 = x8_59[1]
        *arg2 = &x8_59[3]
        uint32_t x11_21 = zx.d(x8_59[2])
        *arg2 = &x8_59[4]
        *(result_3 + 0x38) = zx.d(x8_59[3])
            | (0xffffff & ((0xffff00ff & x9_73 << 0x10) | zx.d(x10_51) << 8 | x11_21)) << 8
        char* x8_62 = *arg2
        *arg2 = &x8_62[1]
        uint32_t x9_78 = zx.d(*x8_62)
        *arg2 = &x8_62[2]
        char x10_53 = x8_62[1]
        *arg2 = &x8_62[3]
        uint32_t x11_23 = zx.d(x8_62[2])
        *arg2 = &x8_62[4]
        *(result_3 + 0x3c) = zx.d(x8_62[3])
            | (0xffffff & ((0xffff00ff & x9_78 << 0x10) | zx.d(x10_53) << 8 | x11_23)) << 8
        char* x8_65 = *arg2
        *arg2 = &x8_65[1]
        uint32_t x9_83 = zx.d(*x8_65)
        *arg2 = &x8_65[2]
        char x10_55 = x8_65[1]
        *arg2 = &x8_65[3]
        uint32_t x11_25 = zx.d(x8_65[2])
        *arg2 = &x8_65[4]
        *(result_3 + 0x44) = *arg1 * float.s(zx.d(x8_65[3])
            | (0xffffff & ((0xffff00ff & x9_83 << 0x10) | zx.d(x10_55) << 8 | x11_25)) << 8)
        char* x8_68 = *arg2
        *arg2 = &x8_68[1]
        uint32_t x9_88 = zx.d(*x8_68)
        *arg2 = &x8_68[2]
        char x10_57 = x8_68[1]
        *arg2 = &x8_68[3]
        uint32_t x11_27 = zx.d(x8_68[2])
        *arg2 = &x8_68[4]
        *(result_3 + 0x48) = *arg1 * float.s(zx.d(x8_68[3])
            | (0xffffff & ((0xffff00ff & x9_88 << 0x10) | zx.d(x10_57) << 8 | x11_27)) << 8)
        char* x8_71 = *arg2
        *arg2 = &x8_71[1]
        float v0_3
        v0_3.b = *x8_71
        float v1_3 = float.s(0x437f0000)
        *(result_3 + 0x4c) = float.s(v0_3) / v1_3
        char* x8_72 = *arg2
        *arg2 = &x8_72[1]
        v0_3.b = *x8_72
        *(result_3 + 0x50) = float.s(v0_3) / v1_3
        char* x8_73 = *arg2
        *arg2 = &x8_73[1]
        v0_3.b = *x8_73
        *(result_3 + 0x54) = float.s(v0_3) / v1_3
        char* x8_74 = *arg2
        *arg2 = &x8_74[1]
        v0_3.b = *x8_74
        v0_3 = float.s(v0_3) / v1_3
        *(result_3 + 0x58) = v0_3
        spRegionAttachment_updateOffset(v0_3)
        spAttachmentLoader_configureAttachment(*(arg1 + 8), result)
    case 1
        *arg2 = x8 + 2
        uint32_t x9_7 = zx.d(*(x8 + 1))
        int32_t x23_2 = x9_7 & 0x7f
        
        if ((x9_7 & 0x80) != 0)
            *arg2 = x8 + 3
            uint32_t x9_9 = zx.d(*(x8 + 2))
            x23_2 = (0xffffc07f & x23_2) | (0x7f & x9_9) << 7
            
            if ((x9_9 & 0x80) != 0)
                *arg2 = x8 + 4
                uint32_t x9_11 = zx.d(*(x8 + 3))
                x23_2 = (0xffe03fff & x23_2) | (0x7f & x9_11) << 0xe
                
                if ((x9_11 & 0x80) != 0)
                    *arg2 = x8 + 5
                    uint32_t x9_13 = zx.d(*(x8 + 4))
                    x23_2 = (0xf01fffff & x23_2) | (0x7f & x9_13) << 0x15
                    
                    if ((x9_13 & 0x80) != 0)
                        *arg2 = x8 + 6
                        x23_2 = (0xfffffff & x23_2) | (0xf & zx.d(*(x8 + 5))) << 0x1c
        
        result = spAttachmentLoader_createAttachment(*(arg1 + 8), arg3, 1, x24, 0)
        sub_fc1dcc(arg1, arg2, result, x23_2)
        
        if (arg7 != 0)
            *arg2 += 4
            spAttachmentLoader_configureAttachment(*(arg1 + 8), result)
        else
            spAttachmentLoader_configureAttachment(*(arg1 + 8), result)
    case 2
        *arg2 = x8 + 2
        uint32_t x10_13 = zx.d(*(x8 + 1))
        int32_t x9_16 = x10_13 & 0x7f
        
        if ((x10_13 & 0x80) != 0)
            *arg2 = x8 + 3
            uint32_t x10_15 = zx.d(*(x8 + 2))
            x9_16 = (0xffffc07f & x9_16) | (0x7f & x10_15) << 7
            
            if ((x10_15 & 0x80) != 0)
                *arg2 = x8 + 4
                uint32_t x10_17 = zx.d(*(x8 + 3))
                x9_16 = (0xffe03fff & x9_16) | (0x7f & x10_17) << 0xe
                
                if ((x10_17 & 0x80) != 0)
                    *arg2 = x8 + 5
                    uint32_t x10_19 = zx.d(*(x8 + 4))
                    x9_16 = (0xf01fffff & x9_16) | (0x7f & x10_19) << 0x15
                    
                    if ((x10_19 & 0x80) != 0)
                        *arg2 = x8 + 6
                        x9_16 = (0xfffffff & x9_16) | (0xf & zx.d(*(x8 + 5))) << 0x1c
        
        char* x25_1
        
        if (x9_16 != 0)
            x25_1 = *(*(arg6 + 0x28) + (sx.q(x9_16 - 1) << 3))
        
        int64_t x0_10
        char* x1_3
        int64_t x23_3
        
        if (x9_16 == 0 || x25_1 == 0)
            x0_10 = _spMalloc(strlen(x24) + 1, 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2d5)
            x23_3 = x0_10
            x1_3 = x24
        else
            x0_10 = _spMalloc(strlen(x25_1) + 1, 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2d8)
            x23_3 = x0_10
            x1_3 = x25_1
        
        strcpy(x0_10, x1_3)
        void* result_4
        float v0_4
        result_4, v0_4 = spAttachmentLoader_createAttachment(*(arg1 + 8), arg3, 2, x24, x23_3)
        *(result_4 + 0x98) = x23_3
        char* x8_75 = *arg2
        result = result_4
        *arg2 = &x8_75[1]
        v0_4.b = *x8_75
        float v1_4 = float.s(0x437f0000)
        *(result_4 + 0xc0) = float.s(v0_4) / v1_4
        char* x8_76 = *arg2
        *arg2 = &x8_76[1]
        v0_4.b = *x8_76
        *(result_4 + 0xc4) = float.s(v0_4) / v1_4
        char* x8_77 = *arg2
        *arg2 = &x8_77[1]
        v0_4.b = *x8_77
        *(result_4 + 0xc8) = float.s(v0_4) / v1_4
        char* x8_78 = *arg2
        *arg2 = &x8_78[1]
        v0_4.b = *x8_78
        *(result_4 + 0xcc) = float.s(v0_4) / v1_4
        char* x8_79 = *arg2
        *arg2 = &x8_79[1]
        uint32_t x9_101 = zx.d(*x8_79)
        int32_t x23_5 = x9_101 & 0x7f
        
        if ((x9_101 & 0x80) != 0)
            *arg2 = &x8_79[2]
            uint32_t x9_103 = zx.d(x8_79[1])
            x23_5 = (0xffffc07f & x23_5) | (0x7f & x9_103) << 7
            
            if ((x9_103 & 0x80) != 0)
                *arg2 = &x8_79[3]
                uint32_t x9_105 = zx.d(x8_79[2])
                x23_5 = (0xffe03fff & x23_5) | (0x7f & x9_105) << 0xe
                
                if ((x9_105 & 0x80) != 0)
                    *arg2 = &x8_79[4]
                    uint32_t x9_107 = zx.d(x8_79[3])
                    x23_5 = (0xf01fffff & x23_5) | (0x7f & x9_107) << 0x15
                    
                    if ((x9_107 & 0x80) != 0)
                        *arg2 = &x8_79[5]
                        x23_5 = (0xfffffff & x23_5) | (0xf & zx.d(x8_79[4])) << 0x1c
        
        int32_t i_8 = x23_5 << 1
        int32_t* x0_32 = _spMalloc(zx.q(i_8) << 0x20 s>> 0x1e, 
            "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x264)
        
        if (i_8 s>= 1)
            uint64_t i_4 = zx.q(i_8)
            int32_t* x9_109 = x0_32
            uint64_t i
            
            do
                char* x10_58 = *arg2
                i = i_4
                i_4 -= 1
                *arg2 = &x10_58[1]
                uint32_t x11_29 = zx.d(*x10_58)
                *arg2 = &x10_58[2]
                char x12_15 = x10_58[1]
                *arg2 = &x10_58[3]
                uint32_t x13_3 = zx.d(x10_58[2])
                *arg2 = &x10_58[4]
                *x9_109 = zx.d(x10_58[3])
                    | (0xffffff & ((0xffff00ff & x11_29 << 0x10) | zx.d(x12_15) << 8 | x13_3)) << 8
                x9_109 = &x9_109[1]
            while (i != 1)
        
        *(result + 0xa0) = x0_32
        char* x8_81 = *arg2
        *arg2 = &x8_81[1]
        uint32_t x9_111 = zx.d(*x8_81)
        int32_t i_9 = x9_111 & 0x7f
        
        if ((x9_111 & 0x80) != 0)
            *arg2 = &x8_81[2]
            uint32_t x9_113 = zx.d(x8_81[1])
            i_9 = (0xffffc07f & i_9) | (0x7f & x9_113) << 7
            
            if ((x9_113 & 0x80) != 0)
                *arg2 = &x8_81[3]
                uint32_t x9_115 = zx.d(x8_81[2])
                i_9 = (0xffe03fff & i_9) | (0x7f & x9_115) << 0xe
                
                if ((x9_115 & 0x80) != 0)
                    *arg2 = &x8_81[4]
                    uint32_t x9_117 = zx.d(x8_81[3])
                    i_9 = (0xf01fffff & i_9) | (0x7f & x9_117) << 0x15
                    
                    if ((x9_117 & 0x80) != 0)
                        *arg2 = &x8_81[5]
                        i_9 = (0xfffffff & i_9) | (0xf & zx.d(x8_81[4])) << 0x1c
        
        uint16_t* x0_34 = _spMalloc(zx.q(i_9) << 0x20 s>> 0x1f, 
            "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x271)
        *(result + 0xb0) = i_9
        
        if (i_9 s>= 1)
            uint64_t i_5 = zx.q(i_9)
            uint16_t* x9_119 = x0_34
            uint64_t i_1
            
            do
                char* x10_61 = *arg2
                i_1 = i_5
                i_5 -= 1
                *arg2 = &x10_61[1]
                *x9_119 = (zx.d(*x10_61) << 8).w
                char* x10_64 = *arg2
                *arg2 = &x10_64[1]
                *x9_119 |= zx.w(*x10_64)
                x9_119 = &x9_119[1]
            while (i_1 != 1)
        
        *(result + 0xb8) = x0_34
        sub_fc1dcc(arg1, arg2, result, x23_5)
        spMeshAttachment_updateUVs(result)
        char* x9_120 = *arg2
        *arg2 = &x9_120[1]
        uint32_t x10_67 = zx.d(*x9_120)
        int32_t x8_84 = x10_67 & 0x7f
        
        if ((x10_67 & 0x80) != 0)
            *arg2 = &x9_120[2]
            uint32_t x10_69 = zx.d(x9_120[1])
            x8_84 = (0xffffc07f & x8_84) | (0x7f & x10_69) << 7
            
            if ((x10_69 & 0x80) != 0)
                *arg2 = &x9_120[3]
                uint32_t x10_71 = zx.d(x9_120[2])
                x8_84 = (0xffe03fff & x8_84) | (0x7f & x10_71) << 0xe
                
                if ((x10_71 & 0x80) != 0)
                    *arg2 = &x9_120[4]
                    uint32_t x10_73 = zx.d(x9_120[3])
                    x8_84 = (0xf01fffff & x8_84) | (0x7f & x10_73) << 0x15
                    
                    if ((x10_73 & 0x80) != 0)
                        *arg2 = &x9_120[5]
                        x8_84 = (0xfffffff & x8_84) | (0xf & zx.d(x9_120[4])) << 0x1c
        
        *(result + 0xd0) = x8_84 << 1
        float v0_5
        
        if (arg7 == 0)
            v0_5 = 0f
            *(result + 0xe8) = 0
            *(result + 0xf0) = 0
        else
            char* x8_86 = *arg2
            *arg2 = &x8_86[1]
            uint32_t x9_123 = zx.d(*x8_86)
            int32_t i_7 = x9_123 & 0x7f
            
            if ((x9_123 & 0x80) != 0)
                *arg2 = &x8_86[2]
                uint32_t x9_125 = zx.d(x8_86[1])
                i_7 = (0xffffc07f & i_7) | (0x7f & x9_125) << 7
                
                if ((x9_125 & 0x80) != 0)
                    *arg2 = &x8_86[3]
                    uint32_t x9_127 = zx.d(x8_86[2])
                    i_7 = (0xffe03fff & i_7) | (0x7f & x9_127) << 0xe
                    
                    if ((x9_127 & 0x80) != 0)
                        *arg2 = &x8_86[4]
                        uint32_t x9_129 = zx.d(x8_86[3])
                        i_7 = (0xf01fffff & i_7) | (0x7f & x9_129) << 0x15
                        
                        if ((x9_129 & 0x80) != 0)
                            *arg2 = &x8_86[5]
                            i_7 = (0xfffffff & i_7) | (0xf & zx.d(x8_86[4])) << 0x1c
            
            uint16_t* x0_38 = _spMalloc(zx.q(i_7) << 0x20 s>> 0x1f, 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x271)
            *(result + 0xe0) = i_7
            
            if (i_7 s>= 1)
                uint64_t i_6 = zx.q(i_7)
                uint16_t* x9_131 = x0_38
                uint64_t i_2
                
                do
                    char* x10_75 = *arg2
                    i_2 = i_6
                    i_6 -= 1
                    *arg2 = &x10_75[1]
                    *x9_131 = (zx.d(*x10_75) << 8).w
                    char* x10_78 = *arg2
                    *arg2 = &x10_78[1]
                    *x9_131 |= zx.w(*x10_78)
                    x9_131 = &x9_131[1]
                while (i_2 != 1)
            
            *(result + 0xe8) = x0_38
            char* x8_88 = *arg2
            *arg2 = &x8_88[1]
            uint32_t x9_133 = zx.d(*x8_88)
            *arg2 = &x8_88[2]
            char x10_82 = x8_88[1]
            *arg2 = &x8_88[3]
            uint32_t x11_40 = zx.d(x8_88[2])
            *arg2 = &x8_88[4]
            *(result + 0xf0) = *arg1 * float.s(zx.d(x8_88[3])
                | (0xffffff & ((0xffff00ff & x9_133 << 0x10) | zx.d(x10_82) << 8 | x11_40)) << 8)
            char* x8_91 = *arg2
            *arg2 = &x8_91[1]
            uint32_t x9_138 = zx.d(*x8_91)
            *arg2 = &x8_91[2]
            char x10_84 = x8_91[1]
            *arg2 = &x8_91[3]
            uint32_t x11_42 = zx.d(x8_91[2])
            *arg2 = &x8_91[4]
            v0_5 = *arg1 * float.s(zx.d(x8_91[3])
                | (0xffffff & ((0xffff00ff & x9_138 << 0x10) | zx.d(x10_84) << 8 | x11_42)) << 8)
        
        *(result + 0xf4) = v0_5
        spAttachmentLoader_configureAttachment(*(arg1 + 8), result)
    case 3
        *arg2 = x8 + 2
        uint32_t x10_21 = zx.d(*(x8 + 1))
        int32_t x9_19 = x10_21 & 0x7f
        
        if ((x10_21 & 0x80) != 0)
            *arg2 = x8 + 3
            uint32_t x10_23 = zx.d(*(x8 + 2))
            x9_19 = (0xffffc07f & x9_19) | (0x7f & x10_23) << 7
            
            if ((x10_23 & 0x80) != 0)
                *arg2 = x8 + 4
                uint32_t x10_25 = zx.d(*(x8 + 3))
                x9_19 = (0xffe03fff & x9_19) | (0x7f & x10_25) << 0xe
                
                if ((x10_25 & 0x80) != 0)
                    *arg2 = x8 + 5
                    uint32_t x10_27 = zx.d(*(x8 + 4))
                    x9_19 = (0xf01fffff & x9_19) | (0x7f & x10_27) << 0x15
                    
                    if ((x10_27 & 0x80) != 0)
                        *arg2 = x8 + 6
                        x9_19 = (0xfffffff & x9_19) | (0xf & zx.d(*(x8 + 5))) << 0x1c
        
        char* x27_1
        
        if (x9_19 != 0)
            x27_1 = *(*(arg6 + 0x28) + (sx.q(x9_19 - 1) << 3))
        
        int64_t x0_14
        char* x1_4
        int64_t x26_1
        
        if (x9_19 == 0 || x27_1 == 0)
            x0_14 = _spMalloc(strlen(x24) + 1, 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2f8)
            x26_1 = x0_14
            x1_4 = x24
        else
            x0_14 = _spMalloc(strlen(x27_1) + 1, 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2fb)
            x26_1 = x0_14
            x1_4 = x27_1
        
        strcpy(x0_14, x1_4)
        void* result_5
        float v0_6
        result_5, v0_6 = spAttachmentLoader_createAttachment(*(arg1 + 8), arg3, 3, x24, x26_1)
        *(result_5 + 0x98) = x26_1
        char* x8_94 = *arg2
        result = result_5
        *arg2 = &x8_94[1]
        v0_6.b = *x8_94
        float v1_6 = float.s(0x437f0000)
        *(result_5 + 0xc0) = float.s(v0_6) / v1_6
        char* x8_95 = *arg2
        *arg2 = &x8_95[1]
        v0_6.b = *x8_95
        *(result_5 + 0xc4) = float.s(v0_6) / v1_6
        char* x8_96 = *arg2
        *arg2 = &x8_96[1]
        v0_6.b = *x8_96
        *(result_5 + 0xc8) = float.s(v0_6) / v1_6
        char* x8_97 = *arg2
        *arg2 = &x8_97[1]
        v0_6.b = *x8_97
        v0_6 = float.s(v0_6) / v1_6
        *(result_5 + 0xcc) = v0_6
        char* x10_85 = *arg2
        void* x8_98 = &x10_85[1]
        *arg2 = x8_98
        uint32_t x11_43 = zx.d(*x10_85)
        int32_t x9_146 = x11_43 & 0x7f
        
        if ((x11_43 & 0x80) != 0)
            x8_98 = &x10_85[2]
            *arg2 = x8_98
            uint32_t x11_44 = zx.d(x10_85[1])
            x9_146 = (0xffffc07f & x9_146) | (0x7f & x11_44) << 7
            
            if ((x11_44 & 0x80) != 0)
                x8_98 = &x10_85[3]
                *arg2 = x8_98
                uint32_t x11_45 = zx.d(x10_85[2])
                x9_146 = (0xffe03fff & x9_146) | (0x7f & x11_45) << 0xe
                
                if ((x11_45 & 0x80) != 0)
                    x8_98 = &x10_85[4]
                    *arg2 = x8_98
                    uint32_t x11_46 = zx.d(x10_85[3])
                    x9_146 = (0xf01fffff & x9_146) | (0x7f & x11_46) << 0x15
                    
                    if ((x11_46 & 0x80) != 0)
                        x8_98 = &x10_85[5]
                        *arg2 = x8_98
                        x9_146 = (0xfffffff & x9_146) | (0xf & zx.d(x10_85[4])) << 0x1c
        
        int64_t x24_1
        
        if (x9_146 == 0)
            x24_1 = 0
        else
            x24_1 = *(*(arg6 + 0x28) + (sx.q(x9_146 - 1) << 3))
        
        void* x9_148 = x8_98 + 1
        *arg2 = x9_148
        uint32_t x11_47 = zx.d(*x8_98)
        int32_t x10_88 = x11_47 & 0x7f
        
        if ((x11_47 & 0x80) != 0)
            x9_148 = x8_98 + 2
            *arg2 = x9_148
            uint32_t x11_48 = zx.d(*(x8_98 + 1))
            x10_88 = (0xffffc07f & x10_88) | (0x7f & x11_48) << 7
            
            if ((x11_48 & 0x80) != 0)
                x9_148 = x8_98 + 3
                *arg2 = x9_148
                uint32_t x11_49 = zx.d(*(x8_98 + 2))
                x10_88 = (0xffe03fff & x10_88) | (0x7f & x11_49) << 0xe
                
                if ((x11_49 & 0x80) != 0)
                    x9_148 = x8_98 + 4
                    *arg2 = x9_148
                    uint32_t x11_50 = zx.d(*(x8_98 + 3))
                    x10_88 = (0xf01fffff & x10_88) | (0x7f & x11_50) << 0x15
                    
                    if ((x11_50 & 0x80) != 0)
                        x9_148 = x8_98 + 5
                        *arg2 = x9_148
                        x10_88 = (0xfffffff & x10_88) | (0xf & zx.d(*(x8_98 + 4))) << 0x1c
        
        int64_t x23_6
        
        if (x10_88 == 0)
            x23_6 = 0
        else
            x23_6 = *(*(arg6 + 0x28) + (sx.q(x10_88 - 1) << 3))
        
        *arg2 = x9_148 + 1
        int32_t x26_3 = zx.d(*x9_148) != 0 ? 1 : 0
        
        if (arg7 != 0)
            *arg2 = x9_148 + 2
            uint32_t x8_104 = zx.d(*(x9_148 + 1))
            *arg2 = x9_148 + 3
            char x10_91 = *(x9_148 + 2)
            *arg2 = x9_148 + 4
            uint32_t x11_52 = zx.d(*(x9_148 + 3))
            *arg2 = x9_148 + 5
            *(result + 0xf0) = *arg1 * float.s(zx.d(*(x9_148 + 4))
                | (0xffffff & ((0xffff00ff & x8_104 << 0x10) | zx.d(x10_91) << 8 | x11_52)) << 8)
            char* x8_108 = *arg2
            *arg2 = &x8_108[1]
            uint32_t x9_152 = zx.d(*x8_108)
            *arg2 = &x8_108[2]
            char x10_93 = x8_108[1]
            *arg2 = &x8_108[3]
            uint32_t x11_54 = zx.d(x8_108[2])
            *arg2 = &x8_108[4]
            v1_6 = float.s(zx.d(x8_108[3])
                | (0xffffff & ((0xffff00ff & x9_152 << 0x10) | zx.d(x10_93) << 8 | x11_54)) << 8)
            v0_6 = *arg1 * v1_6
            *(result + 0xf4) = v0_6
        
        int32_t x8_114 = arg1[7]
        int64_t x20_1
        
        if (x8_114 != arg1[8])
            x20_1 = *(arg1 + 0x28)
        else
            int32_t x8_111
            
            if (x8_114 s< 4)
                x8_111 = 8
            else
                x8_111 = x8_114 << 1
            
            arg1[8] = x8_111
            int64_t x0_46 = _spMalloc(muls.dp.d(x8_111, 0x28), 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0xea, v0_6, v1_6)
            x20_1 = x0_46
            memcpy(x0_46, *(arg1 + 0x28), sx.q(arg1[7]) * 0x28)
            _spFree(*(arg1 + 0x28))
            x8_114 = arg1[7]
            *(arg1 + 0x28) = x20_1
        
        int64_t* x8_115 = x20_1 + muls.dp.d(x8_114, 0x28)
        arg1[7] = x8_114 + 1
        x8_115[3] = result
        x8_115[2].d = arg4
        *x8_115 = x23_6
        x8_115[1] = x24_1
        x8_115[4].d = x26_3
    case 4
        void* result_1 = spAttachmentLoader_createAttachment(*(arg1 + 8), arg3, 4, x24, 0)
        char* x8_8 = *arg2
        result = result_1
        *arg2 = &x8_8[1]
        *(result_1 + 0x70) = zx.d(*x8_8) != 0 ? 1 : 0
        char* x8_11 = *arg2
        *arg2 = &x8_11[1]
        *(result_1 + 0x74) = zx.d(*x8_11) != 0 ? 1 : 0
        char* x8_14 = *arg2
        *arg2 = &x8_14[1]
        uint32_t x9_24 = zx.d(*x8_14)
        int32_t x23_4 = x9_24 & 0x7f
        
        if ((x9_24 & 0x80) != 0)
            *arg2 = &x8_14[2]
            uint32_t x9_26 = zx.d(x8_14[1])
            x23_4 = (0xffffc07f & x23_4) | (0x7f & x9_26) << 7
            
            if ((x9_26 & 0x80) != 0)
                *arg2 = &x8_14[3]
                uint32_t x9_28 = zx.d(x8_14[2])
                x23_4 = (0xffe03fff & x23_4) | (0x7f & x9_28) << 0xe
                
                if ((x9_28 & 0x80) != 0)
                    *arg2 = &x8_14[4]
                    uint32_t x9_30 = zx.d(x8_14[3])
                    x23_4 = (0xf01fffff & x23_4) | (0x7f & x9_30) << 0x15
                    
                    if ((x9_30 & 0x80) != 0)
                        *arg2 = &x8_14[5]
                        x23_4 = (0xfffffff & x23_4) | (0xf & zx.d(x8_14[4])) << 0x1c
        
        sub_fc1dcc(arg1, arg2, result, x23_4)
        uint32_t x8_18 = x23_4 s/ 3
        *(result + 0x60) = x8_18
        int64_t x0_18 = _spMalloc(zx.q(x8_18) << 0x20 s>> 0x1e, 
            "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x315)
        int32_t x8_19 = *(result + 0x60)
        *(result + 0x68) = x0_18
        
        if (x8_19 s>= 1)
            int64_t i_3 = 0
            
            do
                char* x9_33 = *arg2
                *arg2 = &x9_33[1]
                uint32_t x10_30 = zx.d(*x9_33)
                *arg2 = &x9_33[2]
                char x11_6 = x9_33[1]
                *arg2 = &x9_33[3]
                uint32_t x12_3 = zx.d(x9_33[2])
                *arg2 = &x9_33[4]
                *(*(result + 0x68) + (i_3 << 2)) = *arg1 * float.s(zx.d(x9_33[3])
                    | (0xffffff & ((0xffff00ff & x10_30 << 0x10) | zx.d(x11_6) << 8 | x12_3)) << 8)
                i_3 += 1
            while (i_3 s< sx.q(*(result + 0x60)))
        
        if (arg7 == 0)
            spAttachmentLoader_configureAttachment(*(arg1 + 8), result)
        else
            *arg2 += 4
            spAttachmentLoader_configureAttachment(*(arg1 + 8), result)
    case 5
        void* result_2 = spAttachmentLoader_createAttachment(*(arg1 + 8), arg3, 5, x24, 0)
        char* x8_22 = *arg2
        result = result_2
        *arg2 = &x8_22[1]
        uint32_t x9_38 = zx.d(*x8_22)
        *arg2 = &x8_22[2]
        char x10_35 = x8_22[1]
        *arg2 = &x8_22[3]
        uint32_t x11_9 = zx.d(x8_22[2])
        *arg2 = &x8_22[4]
        *(result_2 + 0x30) = zx.d(x8_22[3])
            | (0xffffff & ((0xffff00ff & x9_38 << 0x10) | zx.d(x10_35) << 8 | x11_9)) << 8
        char* x8_25 = *arg2
        *arg2 = &x8_25[1]
        uint32_t x9_43 = zx.d(*x8_25)
        *arg2 = &x8_25[2]
        char x10_37 = x8_25[1]
        *arg2 = &x8_25[3]
        uint32_t x11_11 = zx.d(x8_25[2])
        *arg2 = &x8_25[4]
        *(result_2 + 0x28) = *arg1 * float.s(zx.d(x8_25[3])
            | (0xffffff & ((0xffff00ff & x9_43 << 0x10) | zx.d(x10_37) << 8 | x11_11)) << 8)
        char* x8_28 = *arg2
        *arg2 = &x8_28[1]
        uint32_t x9_48 = zx.d(*x8_28)
        *arg2 = &x8_28[2]
        char x10_39 = x8_28[1]
        *arg2 = &x8_28[3]
        uint32_t x11_13 = zx.d(x8_28[2])
        *arg2 = &x8_28[4]
        *(result_2 + 0x2c) = *arg1 * float.s(zx.d(x8_28[3])
            | (0xffffff & ((0xffff00ff & x9_48 << 0x10) | zx.d(x10_39) << 8 | x11_13)) << 8)
        
        if (arg7 != 0)
            char* x8_31 = *arg2
            *arg2 = &x8_31[1]
            float v0_2
            v0_2.b = *x8_31
            float v1_2 = float.s(0x437f0000)
            *(result + 0x34) = float.s(v0_2) / v1_2
            char* x8_32 = *arg2
            *arg2 = &x8_32[1]
            v0_2.b = *x8_32
            *(result + 0x38) = float.s(v0_2) / v1_2
            char* x8_33 = *arg2
            *arg2 = &x8_33[1]
            v0_2.b = *x8_33
            *(result + 0x3c) = float.s(v0_2) / v1_2
            char* x8_34 = *arg2
            *arg2 = &x8_34[1]
            v0_2.b = *x8_34
            *(result + 0x40) = float.s(v0_2) / v1_2
        
        spAttachmentLoader_configureAttachment(*(arg1 + 8), result)
    case 6
        void* x9_56 = x8 + 2
        *arg2 = x9_56
        uint32_t x10_40 = zx.d(*(x8 + 1))
        int32_t x26_2 = x10_40 & 0x7f
        
        if ((x10_40 & 0x80) != 0)
            x9_56 = x8 + 3
            *arg2 = x9_56
            uint32_t x10_41 = zx.d(*(x8 + 2))
            x26_2 = (0xffffc07f & x26_2) | (0x7f & x10_41) << 7
            
            if ((x10_41 & 0x80) != 0)
                x9_56 = x8 + 4
                *arg2 = x9_56
                uint32_t x10_42 = zx.d(*(x8 + 3))
                x26_2 = (0xffe03fff & x26_2) | (0x7f & x10_42) << 0xe
                
                if ((x10_42 & 0x80) != 0)
                    x9_56 = x8 + 5
                    *arg2 = x9_56
                    uint32_t x10_43 = zx.d(*(x8 + 4))
                    x26_2 = (0xf01fffff & x26_2) | (0x7f & x10_43) << 0x15
                    
                    if ((x10_43 & 0x80) != 0)
                        x9_56 = x8 + 6
                        *arg2 = x9_56
                        x26_2 = (0xfffffff & x26_2) | (0xf & zx.d(*(x8 + 5))) << 0x1c
        
        *arg2 = x9_56 + 1
        uint32_t x8_37 = zx.d(*x9_56)
        int32_t x25_2 = x8_37 & 0x7f
        
        if ((x8_37 & 0x80) != 0)
            *arg2 = x9_56 + 2
            uint32_t x8_39 = zx.d(*(x9_56 + 1))
            x25_2 = (0xffffc07f & x25_2) | (0x7f & x8_39) << 7
            
            if ((x8_39 & 0x80) != 0)
                *arg2 = x9_56 + 3
                uint32_t x8_41 = zx.d(*(x9_56 + 2))
                x25_2 = (0xffe03fff & x25_2) | (0x7f & x8_41) << 0xe
                
                if ((x8_41 & 0x80) != 0)
                    *arg2 = x9_56 + 4
                    uint32_t x8_43 = zx.d(*(x9_56 + 3))
                    x25_2 = (0xf01fffff & x25_2) | (0x7f & x8_43) << 0x15
                    
                    if ((x8_43 & 0x80) != 0)
                        *arg2 = x9_56 + 5
                        x25_2 = (0xfffffff & x25_2) | (0xf & zx.d(*(x9_56 + 4))) << 0x1c
        
        result = spAttachmentLoader_createAttachment(*(arg1 + 8), arg3, 6, x24, 0)
        sub_fc1dcc(arg1, arg2, result, x25_2)
        
        if (arg7 != 0)
            *arg2 += 4
        
        *(result + 0x60) = *(*(arg6 + 0x48) + (sx.q(x26_2) << 3))
        spAttachmentLoader_configureAttachment(*(arg1 + 8), result)

return result
