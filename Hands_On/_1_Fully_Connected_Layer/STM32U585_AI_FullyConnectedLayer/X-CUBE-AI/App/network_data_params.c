/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Aug 20 00:38:08 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[83] = {
  0xbf168a343ec7b6ccU, 0xbefc4216bf10b5bcU, 0x3ea587883eee7c0dU, 0xbd0ca8f8be3b451aU,
  0x3ecadb58bd6fe859U, 0x3dc313103f065c1aU, 0x3d4d2d543e5688e2U, 0xbe1174823f08968dU,
  0xbdfac72ebf071896U, 0x3f63f38e3f242f54U, 0x3de6fc18be3569beU, 0xbf18d9d93daf2880U,
  0xbd4057a9bd8878a4U, 0x3f4869ff3f926c14U, 0x3f0a8ff13f35cdfcU, 0xbf5511883de5d27bU,
  0x3e68247cbea6152eU, 0x3e29f818be928b5cU, 0xbe3bb1c8be94b0adU, 0x3e518adcbeb92af1U,
  0xbc78183f00000000U, 0xbd0f82a83dfdcaf0U, 0xbe6671b0U, 0x3edfce90beb68417U,
  0x0U, 0x3e8190c8bea789cdU, 0x3d41a36d3e75540eU, 0xbea4d2823f98bb3dU,
  0xbf09859e3efc0587U, 0x3ed5fe703e98774cU, 0x3e54e81bbe0bf6c2U, 0xbf0f9ca93e87c0e4U,
  0xbd1ab2303e8d66e1U, 0x3ed0d88bbee6c711U, 0x3cf08ec0bef16694U, 0xbeebca67be13c63aU,
  0xbcd51900be217bdeU, 0x3eaf70debedf07e2U, 0xbef81f083dcc7c90U, 0x3e20f2083d52df20U,
  0xbe2e6586be99f065U, 0x3e35ad74baa7b800U, 0x3d95c1103e2b37f8U, 0xbe81f639bee5527eU,
  0x3e8bd72e3d50e000U, 0xbdd9ecd43e63893cU, 0xbe9476293ec899f5U, 0x3eab106e3f9186b2U,
  0x3e2ddec33f193146U, 0xbb35f000bed87c12U, 0xbdeab85bbe016aecU, 0x3e3fb8673e90bc58U,
  0xbe0f007cbf8e4be0U, 0x3c81901d3f08b798U, 0x3e8a4b80bea10aecU, 0xbd703c51beb8137eU,
  0x3ed87980be2f546fU, 0xbecded14bf55037dU, 0x3ec1ebb1be801dcfU, 0xbc932b00bedb99c9U,
  0x3ea45accbec057c0U, 0xbf0e03393ecc9ca8U, 0xbe26ab98befc2f60U, 0x3f365fddbf0d7febU,
  0xbd9f3e58be28b388U, 0x3e3b5f09be3de4e2U, 0x0U, 0x3e1e8bf2be626217U,
  0x3e8f5f993e14f640U, 0x3fc914213da0585dU, 0x3f09f629be98da0eU, 0xbf15291cbf486d8dU,
  0x3f6d98d4be823f32U, 0xbfcb3b6dbe40cea9U, 0x3cafa920be548d78U, 0x3f3d0f61beda6852U,
  0x3d203ee13f0dbbdaU, 0xbe71f4a03f697a38U, 0xbecfed88beaca0b7U, 0xbef0482a3f04c5b4U,
  0xbfacb2babf7f295aU, 0x3dcbd9703d6887d7U, 0xbe4fd5f5U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

