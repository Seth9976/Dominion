// 函数: _ZN5Botan9to_stringENS_23Certificate_Status_CodeE
// 地址: 0xd691c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s> 0xf9f)
    uint64_t x8_2 = zx.q(arg1 - 0xfa0)
    
    if (x8_2.d u<= 0xa)
        switch (x8_2)
            case 0
                return "Certificate policy error"
            case 1
                return "Certificate does not allow the requested usage"
            case 2
                return "Certificate chain too long"
            case 3
                return "CA certificate not allowed to issue certs"
            case 4
                return "Certificate does not pass name constraint"
            case 5
                return "CA certificate not allowed to issue CRLs"
            case 6
                return "OCSP cert not listed"
            case 7
                return "OCSP bad status"
            case 8
                return "Certificate does not match provided name"
            case 9
                return "Unknown critical extension encountered"
            case 0xa
                return "Duplicate certificate extension encountered"
    else
        uint64_t x8_3 = zx.q(arg1 - 0x1195)
        
        if (x8_3.d u> 6)
            uint64_t x8_5 = zx.q(arg1 - 0x1388)
            
            if (x8_5.d u<= 5)
                switch (x8_5)
                    case 0
                        return "Certificate is revoked"
                    case 1
                        return "CRL bad signature"
                    case 2
                        return "Signature error"
                    case 3
                        return "Certificate public key invalid"
                    case 4
                        return "Certificate signed with unknown/unavailable algorithm"
                    case 5
                        return "Certificate signature has invalid parameters"
        else
            switch (x8_3)
                case 0
                    return "OCSP signature error"
                case 1
                    return "Unable to find certificate issusing OCSP response"
                case 2
                    return "OCSP issuer's keyusage prohibits OCSP"
                case 3
                    return "OCSP parsing valid"
                case 4
                    return "
                        Encountered extension in certificate with version that does not allow it"
                case 5
                    return "Certificate contains duplicate policy"
                case 6
                    return "Encountered v2 identifiers in v1 certificate"
else if (arg1 s> 0x7cf)
    uint64_t x8_4 = zx.q(arg1 - 0x7d0)
    
    if (x8_4.d u> 6)
        uint64_t x8_6 = zx.q(arg1 - 0xbb8)
        
        if (x8_6.d u<= 4)
            switch (x8_6)
                case 0
                    return "Certificate issuer not found"
                case 1
                    return "Cannot establish trust"
                case 2
                    return "Loop in certificate chain"
                case 3
                    return "Certificate chain does not end in a CA certificate"
                case 4
                    return "Certificate issuer does not match subject of issuing cert"
    else
        switch (x8_4)
            case 0
                return "Certificate is not yet valid"
            case 1
                return "Certificate has expired"
            case 2
                return "OCSP is not yet valid"
            case 3
                return "OCSP response has expired"
            case 4
                return "CRL response is not yet valid"
            case 5
                return "CRL has expired"
            case 6
                return "OCSP response is too old"
else if (arg1 u<= 4)
    switch (arg1)
        case 0
            return "Verified"
        case 1
            return "OCSP response accepted as affirming unrevoked status for certificate"
        case 2
            return "Signature on OCSP response was found valid"
        case 3
            return "Valid CRL examined"
        case 4
            return "OCSP requests not available, no HTTP support compiled in"
else
    uint64_t x8 = zx.q(arg1 - 0x1f4)
    
    if (x8.d u<= 3)
        switch (x8)
            case 0
                return "Certificate serial number is negative"
            case 1
                return "Distinguished name too long"
            case 2
                return "OCSP URL not available"
            case 3
                return "OCSP server not available"
    else
        uint64_t x8_1 = zx.q(arg1 - 0x3e8)
        
        if (x8_1.d u<= 3)
            switch (x8_1)
                case 0
                    return "Signature method too weak"
                case 1
                    return "Hash function used is considered too weak for security"
                case 2
                    return "No revocation data"
                case 3
                    return "No CRL with matching distribution point for certificate"

return nullptr
