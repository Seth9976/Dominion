// 函数: _Z20checkGlErrorFunctionPKciS0_
// 地址: 0xf899bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = glGetError()

if (result.d != 0)
    XTrace("%s(%d): %s - glError (0x%x)\n")
    result = glGetError()
    
    if (result.d != 0)
        XTrace("%s(%d): %s - glError (0x%x)\n")
        result = glGetError()
        
        if (result.d != 0)
            XTrace("%s(%d): %s - glError (0x%x)\n")
            result = glGetError()
            
            if (result.d != 0)
                XTrace("%s(%d): %s - glError (0x%x)\n")
                result = glGetError()
                
                if (result.d != 0)
                    return XTrace("%s(%d): %s - glError (0x%x)\n") __tailcall

return result
