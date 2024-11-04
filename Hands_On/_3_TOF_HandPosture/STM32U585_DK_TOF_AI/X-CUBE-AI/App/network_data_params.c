/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-11-04T20:58:19+0900
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
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
const ai_u64 s_network_weights_array_u64[1376] = {
  0x3e185cb3be34c12eU, 0x3fdd429bbf8735b1U, 0xbd95aabe3d5759e0U, 0xbf7c1c6c3d4f210eU,
  0x3ead8d53bbb22a9bU, 0xbf5a7150bf8cb1e3U, 0xbfbfc7693d1bc03dU, 0xbf6af489bf5fdf52U,
  0xbec9c5923afbce7cU, 0xbde9cb043d0b1fcaU, 0xbe2bb7423e2d9d8bU, 0x3e2cee813d886976U,
  0x3eb0b12bbdb74bedU, 0x3e170c4c3cf18386U, 0x3f821a86be080341U, 0x3cfb3cccbf0a04a3U,
  0xc00eb9763e178bd5U, 0x3f46e9eebef34777U, 0x3f8624acbe745852U, 0x3f0615163d09cb48U,
  0x3e97a5d03c85f96cU, 0x3ea359cebe9346c9U, 0xbe3dfa4a3cea6585U, 0xbea5e7f83dbe2a64U,
  0x3ead15c6bee9a430U, 0xbebbb75ebd8c9c42U, 0xbe08acfd3d829951U, 0x3f989a32bf31d090U,
  0x3e94012dbf8fb7b5U, 0x3ebf4b93bfe8ffdaU, 0x3d05e288bedbbfe9U, 0xbdc4bbe7bea5802aU,
  0x3db26832c00108dfU, 0xbf2f08563cbfa2b8U, 0xbf7a6b403e49b3ddU, 0xbf5513403c6088aaU,
  0x3db3a638bebd88a6U, 0xbf4fe995be3a7a99U, 0xbe3e4b0cbd5f0a08U, 0xbfd8dcfb3dcd4899U,
  0xc0142bbd3ddcedc8U, 0xbf2ef60abcd8b3edU, 0x3f727c06bea0f875U, 0x3dd6d553bcca7621U,
  0x4013aaa9be627e3aU, 0xbf465bf43bf40398U, 0x3f039233bf014692U, 0x3f4cacd7be439095U,
  0xbf27330fbca7382fU, 0xbe8898e73e1bde2aU, 0xbf25b0e33c92a060U, 0x3ea4fd95be855d1aU,
  0xbf85e5c43e370a02U, 0xbf858c0c3d918774U, 0xbea5d5753dc7aaf0U, 0x3f1f585d3da49e5cU,
  0x3f9336b5bf2aa265U, 0xbf4693133e0789c1U, 0xbf81e00c3d7f7fa8U, 0xbf61de493c9bddb4U,
  0xbe47254ebe03c295U, 0x3ef682f4bf100370U, 0x3f549c173ded5392U, 0x3f622f31bd82311bU,
  0x3f9a65a5be188f6dU, 0x3d961da1be3738b8U, 0x3f38edacbd2806dfU, 0x3f946c36be784ecdU,
  0x3f57a925be0d1978U, 0xbe9a2388bea6d172U, 0x3eeda091be8ed26bU, 0xbd43603ebe3fa788U,
  0xbe52e6bfbeb704e6U, 0xbf1d7b84bf5a59f1U, 0xbf170fa23fd543fcU, 0x3e886af0bf984350U,
  0xbf2144ae3eb71fb2U, 0x3f0663783e7724b3U, 0xbe04631f3de6426dU, 0x3e66e08e3e2a6fb6U,
  0x3eb0b50f3eb592a5U, 0x3f4076d93e8db096U, 0x3e33f6883e1f80a5U, 0x3d7458063f16b263U,
  0x3e123faf3e559b3aU, 0x3fbdc0133e9de9bdU, 0x3e4af4543cb8d71bU, 0x3e6079d33f400628U,
  0x3d1bfbabbf777007U, 0xbf556137bdb647d3U, 0xbdea95c9be338176U, 0xbd5b36b13e0a8770U,
  0x3cbd188d3d448212U, 0xbf470b49bed16135U, 0xbeb57c94bdc5fbeaU, 0xbe0e43e63ea8383fU,
  0xbe704f76bea0794bU, 0xbf503bb83e07d21aU, 0x3e14836c3e826087U, 0xbe2b0d7b3f409e5eU,
  0xbf1c81fb3d5931ceU, 0xbd6637e9bf5507d3U, 0x3e3ec135be98c742U, 0xbe02af40beac651aU,
  0xbecf1af73ee7efb9U, 0xbd6ec860beb3b230U, 0xbe7cffe33e903cc2U, 0xbecac0493b7a739dU,
  0xbebed979be178354U, 0x3e0a317d3e579420U, 0x3e9c9ca0be7faca3U, 0xbeefd0e43e4cfab2U,
  0xbee64a13bdb0e5a2U, 0x3f23288e3c196073U, 0xbe574d793df900e0U, 0x3e54cb1dbd16e429U,
  0xbf2b645f3cfcc288U, 0xbef73a563ce01354U, 0xbe0a9cdebb478234U, 0xbe0b08553e955deaU,
  0xbd301f55bea7dd58U, 0x3f140809bd90108cU, 0xbe96463bbdbd7330U, 0x3e5c332ebd0ffca7U,
  0xbe17a27d3e8f446dU, 0x3e81eb3e3f342c28U, 0xbe4a3ccb3e7665eaU, 0xbd68d7a8bef82ca8U,
  0xbe37d13ebee49d57U, 0xbf5f3f01bd82bbe3U, 0xbf348730bec206b7U, 0x3d7cdbdfbe7dd0ffU,
  0xbe1b0d713e6218bbU, 0x3ed8733dbe264daaU, 0xbe3ef3d6bdf40abbU, 0x3eabbb463e7ffd89U,
  0xbed648a23e8b3a13U, 0xbf06d2383eadc9b2U, 0xbe45ba933e111ca1U, 0xbd31fd983ce07314U,
  0xbfa4de39bea4d67bU, 0xbf31c2313ec7a0feU, 0x3b90c040bf1678c1U, 0xbcb8e699beb1f9a8U,
  0xbf897d1d3f3cf079U, 0xbf0583aa3db9da5dU, 0xbd4292cbbd1c0e00U, 0xbe7f37f63f268c6fU,
  0x3e690bee3f508a44U, 0x3ee5335e3f0cb0acU, 0xbe97d33e3f829c9cU, 0x3ee3fb013ecf0c54U,
  0x3eb3f8263eaeddabU, 0x3f6a6d7a3f00e08cU, 0xbf1d79033e823e91U, 0x3f153d693e3f5227U,
  0x3d4bb41e3e5f9091U, 0x3f0b52c53eb344dcU, 0xbf1123473eb105f5U, 0x3f4780923c3e2a2aU,
  0x3e3a066dbdbdff9eU, 0xbf17eb843db137dcU, 0xbfa6c3523f40af2aU, 0xbe247f373e93d9c6U,
  0xbe6b94adbf5fa5b1U, 0xbf72c75bbc878db0U, 0xbf22ccaf3f1ce2f1U, 0x3db268c9be90a98aU,
  0x3e3ce112bf13241bU, 0xbee7a6d73e013f96U, 0xbe52834a3eed814dU, 0xbd995a26bf27c7f2U,
  0xbe8e91fcbdc47535U, 0xbd923b33bf68c535U, 0xbe8366573f56cbb2U, 0xbd6666c33ddd0494U,
  0xbd8d0842bf0d3b7cU, 0xbe233d033c62dafaU, 0xbd873e363f3ff019U, 0x3e0f5106bda8731fU,
  0xbecc3c2abf38a360U, 0xbd60bd9c3dc5d57aU, 0x3d3bdea73ed3120bU, 0x3f02631ebe3746c6U,
  0xbbc99a7cbe0456acU, 0x3f1974cdbe1e00b0U, 0x3d9072ed3d699dc4U, 0x3d52fe8cbec1d211U,
  0xbe385770bdb831f9U, 0xbdcd0d33be6c7e23U, 0xbdec4a25bbd6bef4U, 0x3d8fdad8bf3209cfU,
  0x3e14cf7bbb2d925cU, 0xbe83a75ebe0c6831U, 0xbe16af75be7cfb01U, 0xbe170274bdd363f9U,
  0xbeb289d63ddf71d1U, 0xbe9e666c3ed81df7U, 0xbe0f50bc3db7f61aU, 0xbce6ebaa3e0e7864U,
  0xbf33ac28bd017169U, 0x3e2592d63cec9da2U, 0x3e5be066bdf0248aU, 0x3e3e635dbdc99f1eU,
  0xbedcb2d83db270a5U, 0xbf5617f4bce1e8e8U, 0x3e2d6044bdad7a4eU, 0x3e07766c3d96ac9bU,
  0xbd3f9a41bec6cdceU, 0xbeaa6504bead1f09U, 0xbeaf1d11bd32b9a0U, 0xbe2f4ee7be87798dU,
  0x3f88b9fcbee4f27bU, 0xbe8e82ef3d394842U, 0xbed99933be9f34feU, 0xbdd172f4bbf367dfU,
  0xbee708d7be8446b5U, 0xbe4bf3d0be25fe63U, 0xbd5c9141be59b740U, 0xbe56fdd43f692886U,
  0xbea1dea7bf342651U, 0xbf2f38a6bcb76c23U, 0xbee48d13be67defcU, 0xbd0545d13ca48198U,
  0x3ecd6a32bee72b5fU, 0x3ed84eb5bf665288U, 0x3d20d0c53e25f78cU, 0x3d55015c3c59f5e1U,
  0x3e699ec1bf093d99U, 0xbf1f5027bd67290eU, 0xbf20d3803f2882b9U, 0xbe6f591cbf1e4f6cU,
  0xbf3bc2063eeb86a1U, 0xbf595042bea8d4a1U, 0xbd54d8b13e81a26dU, 0xbe9dff6d3d960019U,
  0x3d313f0a3ea987ebU, 0xbf548cbebe78d4aaU, 0xbe13c9aa3ee2f6cdU, 0xbeca0933be8538c1U,
  0xbf11d2babb8b8987U, 0xbfba87983e626a7aU, 0xbf3e90a9bc11532aU, 0xbdc57ce0bf47263eU,
  0xbd3ebb873d54b3eeU, 0xbf5a2f14be022b22U, 0x3d0f23a0bed103b8U, 0x3e0bb3dcbe36a1b5U,
  0xbdf441bebe1d084bU, 0x3ee29cecbf4eef43U, 0xbb99203fbe28533cU, 0xbea33127bfdaa179U,
  0xbcfb71c33f0e3c70U, 0xbf3284533e9e001fU, 0xbee898843f160c59U, 0x3ef4d54abef972faU,
  0x3dc8aa0b3fa836e9U, 0xbe8a286c3efee89bU, 0xbceb101abe648cb6U, 0xbef1eb17bf7236ebU,
  0x3deb49313e59ad6dU, 0xbf69059cbdee0b7aU, 0x3d4105c7bf2147c3U, 0x3e9c03e3beb224aeU,
  0x3d646f27bfa22d6cU, 0xbe423baabf031bd9U, 0x3fcaa621bf5c6bafU, 0xbe13c3673f56ee67U,
  0x3eb598103f2599d5U, 0xb94063d03ec5b1c3U, 0x3e64be9d3c96c958U, 0xbf502abd3e5a4b80U,
  0x3e90c49b3e2f1c6aU, 0xbeaed8d03d01591fU, 0xbeace09ebc00be53U, 0xbe8244443e187836U,
  0x3e92e57bbe3a5f7dU, 0xbd76a0b03d080362U, 0x3ee01e39bee7b657U, 0xbf03eec33f296bf4U,
  0x3d62ed863ea75762U, 0xbeb2928d3c936c00U, 0xbdba63a2bead536fU, 0xbf4f33523e8a550cU,
  0x3c067d073e85ecb8U, 0x3d16d17d3e229afcU, 0x3cc53bf83e4c3537U, 0x3e6c4171be14bd49U,
  0x3d6ae0453e4d82d9U, 0xbe1b0bf43eb6f660U, 0x3ce7d1a3be4d2ca4U, 0xbfa9f0023f06bfb4U,
  0xbe3d50533e6dcfeaU, 0xbe849cdabe7ec7feU, 0x3a913786bccc1825U, 0x3d7aebbdbe836b26U,
  0xbf8e4b273e296583U, 0x3e5c5524be626c7dU, 0x3cf255c53defadbcU, 0x3d887977bd4b3804U,
  0xbde297cdbdd4b090U, 0x3eafca87be5b365aU, 0x3e4a6decb94a248cU, 0x3e055fc9be04c396U,
  0xbd7fd714bcfd4279U, 0x3f313046bec1a0c6U, 0x3d9cd9edbe1f38e1U, 0x3d8f6798bf27d777U,
  0xbe4cb6aabe876fcdU, 0x3f6c6aaa3eafdb38U, 0x3d7e711f3e68f08aU, 0xbdaab3febeb8af8bU,
  0xbee0c88d3e08deb4U, 0x3e9cc755be55922eU, 0xbdc7a18f3c1a8321U, 0x3d72519fbe62f733U,
  0x3f0dc2973db1183bU, 0xbe4723a5beff5205U, 0x3d60e9c0bd80a4d4U, 0xbdc3c181bf10d31eU,
  0x3eb999623ed38c64U, 0xbf0754d63d7e4d3eU, 0xbf0b155a3e8060cdU, 0xbdde203dbcb6fc14U,
  0x3f31d75bbe9afc34U, 0xbee8de2a3e63f9a0U, 0xbe49dd5bbd901c51U, 0xbe395db3be851659U,
  0x3ec91190bea453feU, 0xbfe4df19bf3a4c84U, 0x3b8a32e93d9923caU, 0xbde8f033be6199b9U,
  0xbdf44ef5be4b5aedU, 0xbf1a8063be1acac0U, 0xbd5ffce43e8c9353U, 0xbde60eb6bec773ddU,
  0xbf423898be629563U, 0xbf82a243be08f4b5U, 0xbe76d38dbe8dd473U, 0xbc229936bf93dd09U,
  0x3eac5c473e9e0e34U, 0x3f6a9ca9bf080946U, 0xbe099e833e3ffed2U, 0x3e63b17ebd1ca22dU,
  0xbd4d09be3f099387U, 0x3ed4cd2c3da83eb4U, 0xbec88725bda69893U, 0x3e928201bef9ad86U,
  0xbf2704eebe265e03U, 0xbdbd448b3dda893eU, 0xbf474751bf1852f8U, 0xbb8b2732beeb05aaU,
  0xbe0722c5be1ca184U, 0x3f18c27c3ccb7c9fU, 0x3ea226633de0848bU, 0x3ebdfa4a3e1db236U,
  0xbdac74b03de973e2U, 0x3e92c95ebe1f6a18U, 0xbe8da709be665725U, 0x3c8cbedcbf89f235U,
  0xbde396a23e0f66dfU, 0xbe73c8793e0be2acU, 0xbf1b2079be984779U, 0xbe06463abe291101U,
  0xbee5a29e3d06e0feU, 0xbe945f9ebd4ece39U, 0xbe4294f8bd4c190cU, 0xbc934d25be9f98b2U,
  0xbeb98beebedd5ff9U, 0xbf98695fbc1e568bU, 0x3d329586bdcc6c82U, 0xbe547b1bbd3f4178U,
  0xbf380c7bbe54dcf7U, 0xbeed76113d00836cU, 0x3dec8648bea467d2U, 0xbd94c9efbea428cbU,
  0xbf47ba80be830de6U, 0xbf01525cbf3936d6U, 0x3e4c57a7bf43a1e8U, 0xbe678bcebf6468e1U,
  0xbdef3f6e3e84c46bU, 0x3dd1e144be2f6cd0U, 0x3e3d28363dcc470dU, 0xbe8d625abe93c219U,
  0x3ea91ca93e7e8a03U, 0x3ea93e153e9d0525U, 0xbf203f023db6bd47U, 0x3e5b05d73e1a031fU,
  0xbf7d4a03bedb314cU, 0xbf50a48fbf548853U, 0xbf69d9b0bf418745U, 0xbea4c530be39412dU,
  0x3dc995643d933a7fU, 0xbef86df1bf54ffc6U, 0x3e546134bd0787f0U, 0x3dbc46733ef06c63U,
  0x3cbef2133e964b32U, 0x3f1490f23e1c88f4U, 0x3dc91e423cd08273U, 0x3ebb1ef9bf157a85U,
  0xbe0c9e2dbd8a4a9dU, 0x3d8c6b8cbebe2064U, 0x3d57784dbcaaa141U, 0xbe8915e1bbf45e75U,
  0xbec72422bd37bc69U, 0x3d25367bbf132b24U, 0xbeff623bbdd84facU, 0x3e283d623f224a04U,
  0x3f1a2e98bc4ccea0U, 0xbf329a80bf689e2bU, 0x3d60aede3d4fd0feU, 0xbe0b0c3e3f4e6f40U,
  0xbf31b57cbe81bc58U, 0xbe4e1a28bf1a3ec6U, 0xbf21f1bdbe998074U, 0xbea75c0dbf28a9acU,
  0x3e60a360bf0181a7U, 0xbe1445c4be95aeaeU, 0xbf0ce666bf56e9e4U, 0xbe0972ab3cfe9e06U,
  0x3ecfd305be26e046U, 0xbf9bc317be108e2bU, 0xbec06d0f3e6222e8U, 0xbf4866843ec2b474U,
  0xbe801508be9c6a21U, 0xbf4de5edbf734b3dU, 0xbf1f1af2bf34e8c3U, 0xbdbe25f5be40b8fbU,
  0x3db566bdbed00d8fU, 0x3d581764befa30eaU, 0x3de8a7f5be0d3518U, 0x3c3ffa313eba6417U,
  0x3e0df3d73dd736cfU, 0x3dca9e0ebd0ea6e0U, 0xbd6f23943d9a390dU, 0xbebf2c64bd347e01U,
  0xbf4bed62bf173355U, 0xbf86822cbe9e8c49U, 0xbf9798f7bf003e95U, 0xbd3f27673eaf48f0U,
  0xbef4d19dbe13d374U, 0xbf9841643f46ed2eU, 0xbf8a4ac63cef86b6U, 0x3c11665f3ec6ab7dU,
  0xbf9b330bbeff01f1U, 0xbf8144633c11a59eU, 0xbf36103ebf2b35ceU, 0xbeec2168bf61c59aU,
  0xbdb4020dbcdf315eU, 0xbd6bdc28bf2edc40U, 0xbdb2900ebf6f48e1U, 0x3df0431b3ec16866U,
  0xbd12c95e3eb72683U, 0x3ed189a33eeba16cU, 0xbe29d7bebd7aaa49U, 0x3e84779e3ee5b0adU,
  0x3e31f370bdc10d34U, 0xbf381fa7bd0f33afU, 0xbf2b7fa3bf36da56U, 0xbf298f3abfb8c581U,
  0x3dd7def8bd36909dU, 0xbda70dcf3d24bd29U, 0xbe328fa2bbf4b892U, 0xbe171e3a3d58228dU,
  0xbd8dc2e33e05ffd1U, 0x3df1766cbd9d00a1U, 0xbe040d3e3ef86a2eU, 0x3f07822fbc997c4aU,
  0x3db465913e560aceU, 0xbcadfed3bd531a45U, 0xbe23bfd13f2e5a8dU, 0xbf77d877beb8374bU,
  0x3f153967bf010acdU, 0xbe378cea3ef47111U, 0x3ddd7e123e501662U, 0x3d2acef23e8e99bbU,
  0x3f442bbfbe43c4a5U, 0x3f921522bc4f5e98U, 0x3dd19594bdac0185U, 0x3b9e7fecbe972b11U,
  0x3f0c718d3e6c7bbeU, 0x3f0137eb3e5bd9bfU, 0xbe97799e3e818304U, 0xbe34d884bf71103fU,
  0xbf3478a73df75022U, 0xbde209b93f0c1b9aU, 0x3d5101283e58a71cU, 0xbe942f6cbe4b7e6bU,
  0xbf21bf613d489b4cU, 0x3d6a8f6dbacb894cU, 0x3e1a1adb3e1f442cU, 0xbd282fdbbe8d3aa8U,
  0xbf5733953eb42dbdU, 0x3e17dacdbe827411U, 0x3d28b5693e65943eU, 0x3e6dce3abde35587U,
  0xbe785e4fbda2ed12U, 0x3dd225093e1f29faU, 0xbdf19476befab8e0U, 0xbdefa4023d246ca6U,
  0xbeceb025be606fddU, 0xbe5a16613d6dc905U, 0x3e60f12ebec71525U, 0xbe1a44ecbea8d16bU,
  0xbe8d5e4cbe6d39fcU, 0x3e09bd8fbed182f5U, 0xbd8dfea1bd3eb345U, 0xbd9608203e9c4c28U,
  0xbdfa4cb4bf605baaU, 0xbeeaa001bf4f8210U, 0xbf320d66bf03a068U, 0xbebc52ecbf4c6885U,
  0xbeb14d29bf649a8cU, 0x3d9f1673bfa866cbU, 0xbeaf27ffbf46c69aU, 0xbf3f0bd9bf3a472aU,
  0x3bb6c3e3bf2fef3fU, 0xbf406809bfa158e8U, 0xbeadf69bbf936289U, 0xbe365922bf42a754U,
  0x3f30cd87bf513a16U, 0xbc855d61bf96100fU, 0xbd9002e83cfde2acU, 0xbe2bf8d33c5e0dcbU,
  0x3ede6a8ebec9b40fU, 0x3f5d4ce3be940cffU, 0x3e5da5343dd9c8c0U, 0xbebcdda9bdd68b91U,
  0x3ec5f11f3f218fa4U, 0x3e812a78bdd4cba3U, 0xbf2d168c3b4f26f6U, 0x3d9d1391bf6704f2U,
  0x3d2880c3bd4e13daU, 0x3e72b2a4bd11df33U, 0x3c043bef3e068d1eU, 0x3e8ed468be75f7d6U,
  0x3e0bbab73e58b370U, 0x3e00bef63c4f71dfU, 0xbd49d0ea3ec7ec55U, 0xbc4f2b26bbd93436U,
  0xbdf6e5013d1dde26U, 0x3ea19f623e2529b4U, 0x3e46f6d8be3e4500U, 0x3ec8b04fbea8bbefU,
  0xbec7585dbdd24095U, 0xbe818072be73f0cfU, 0x3e01dd6ebe14435eU, 0xbe82e44abe57d7b6U,
  0xbf449048be77eadfU, 0x3cd955f6be684af1U, 0x3d0bb55fbd156f90U, 0xbe104d4bbf414885U,
  0xbde944a93ecc3a4cU, 0xbd26cb29bebf02fbU, 0x3e162558bdb062beU, 0xbdb24ad13f4364d5U,
  0xbf389aefbe0322feU, 0xbe866ebabf27d23eU, 0xbe2d79d03d264cdeU, 0x3b847ff4be5b0611U,
  0xbedc717cbe86b2b4U, 0xbd944982bebf5930U, 0xbeca144cbe1451ecU, 0xbe831ea9be253529U,
  0xbfa7fd9f3ea9aa18U, 0xbed5fac4bcc2e79cU, 0x3ee800a2beb8e5cfU, 0xbe7d181d3eabe99dU,
  0xbe8da9d8bd917ad5U, 0xbeae77bdbecf6ad9U, 0xbe6bf52bbe4dce46U, 0xbd4b2d78be85dfd2U,
  0x3d7720d8be99c8f3U, 0xbe7d11debe7fba0cU, 0xbe21ba7bbd849313U, 0xbddd7bb93e2fb5cbU,
  0xbf688cb6bed4801cU, 0xbf57fe5bbeb80248U, 0x3ea0fbe1be85e4c2U, 0x3d29fff63d27fa5fU,
  0xbee02fbebe07a176U, 0xbe07f683be95a392U, 0xbf0ca202bf03c4e5U, 0x3d5158ce3e454acaU,
  0xbeff3d6dbe53c7aeU, 0xbf2116dabe1f56f7U, 0xbf8050d5bf036458U, 0xbf01e7413ed992d3U,
  0x3cc752dc3d3609c6U, 0xbe4258023e8c0e00U, 0xbf4f2727bd0d3d27U, 0x3f23e21a3f04d325U,
  0x3d6af9dabf348e02U, 0x3e367b5c3e5ed726U, 0x3e70f02cbf1fd52dU, 0x3e55d0b53f0f8cfbU,
  0xbe67b013be2b2548U, 0x3dae0be9bd325715U, 0x3dcb8363bec18677U, 0xbf59a69e3d3a2e2bU,
  0xbec55eb3be881cd7U, 0xbe17bccabe249bfeU, 0x3e8f23343e3e5952U, 0x3e784fe03f6ef820U,
  0xbcbe51e5be84e458U, 0x3eb08b223ecf41adU, 0x3eb4b29c3e74189dU, 0x3f8da2723eb81429U,
  0x3db82767bf4a8c9cU, 0xbf0e95203e4567a4U, 0xbe9771c43e21a44eU, 0xbf3b2ad63d61efd3U,
  0x3e43884abd79fb56U, 0xbe6c0abdbf001b21U, 0xbe3126f7be02c397U, 0x3ed179833de6323bU,
  0x3ee6a295be283247U, 0x3ed7e6eebf3b02dfU, 0xbea1ca19be7893bbU, 0xbe4f1d89bf52887cU,
  0x3f05584ebe36b951U, 0x3e82239abeaeb93dU, 0xbe2f1c5dbf276410U, 0x3db19282bf6017caU,
  0x3e21c134be1f8e21U, 0x3d584eaabeee4da9U, 0xbe600982bf0a2ac0U, 0x3e405983bf571937U,
  0x3e5a7f3fbe1507abU, 0x3ea52062bf0d06bbU, 0x3e559a29be573863U, 0xbdc71978bd8e4c05U,
  0x3eb7441abce2e5d0U, 0x3ea7445a3e359078U, 0x3ea31ca6be692a92U, 0xbea66cd4be0163aaU,
  0x3e0acbc2be6f60beU, 0x3f2d81573cf9c975U, 0x3ec27549beba1d6bU, 0xbe83777fbf002998U,
  0xbf13ab42bee07199U, 0xbfaae340beb8834dU, 0xbefc7ef83df5c794U, 0xbedcf32b3dab734cU,
  0xbefa2332be6a2254U, 0xc0008a723eb8359cU, 0xbed7a4593e57f105U, 0xbf2c840d3e6648deU,
  0xbee05afbbe38136cU, 0xbf3736263eb609b1U, 0xbe9c9d473e95baf3U, 0xbd17b6b4bef9ae0cU,
  0xbf288173bf92dcbdU, 0xbf924168bf5fe8d4U, 0xbf66cf85bf3d4bb0U, 0xbe5c9b40bd82727cU,
  0x3e50bb59beca41eeU, 0xbf621ebebe8f8ef1U, 0xbf857a80becbe174U, 0x3f049e673e920364U,
  0x3ebaace5be22dc20U, 0xbecea2303f133d33U, 0xbf37508c3e448eaeU, 0x3d6f3e43bee2fecfU,
  0x3db5de8fbf38439bU, 0xbf722136be41735cU, 0xbf081f81bf4ac1a1U, 0xbe350042be6fe607U,
  0x3ccd53bd3dd50287U, 0xbe577426bf3e99a7U, 0xbd9cb5cabdaf5981U, 0x3d8259953ed572c1U,
  0xbe3a98663ee8868dU, 0x3e90f7363f08802eU, 0x3d8589ed3ecf67d0U, 0x3f08ea2d3e3afdeeU,
  0xbedb6442be06cd87U, 0xbefd7b77bf3752b7U, 0xbdf7a200bf903d8aU, 0xbf41b2cdbea7123aU,
  0xbe508c663e8ee955U, 0xbe23861fbe9de11cU, 0xbbce3b0fbf3ef94bU, 0x3da5abb9bd97d15cU,
  0xbdb82e7b3e912919U, 0xbe286e5d3e323115U, 0xbda07cec3ea48a75U, 0x3f2f42483dc58c20U,
  0xbe2efa59bf178678U, 0xbe31b284bee1e5c6U, 0x3d492d0bbea540cfU, 0xbd8384a8be14a5f3U,
  0x3e3a3fb93e020c17U, 0x3df45b9cbf074fcbU, 0xbde69065bec1578aU, 0x3e4ac5ffbf2c5c80U,
  0x3d13e2e8bdee7886U, 0xbeb3291abcdfc872U, 0xbdb5544dbf24764bU, 0x3e139ef8bf679cddU,
  0x3ddb8e7d3ecf588fU, 0x3f001d07bea06719U, 0x3e520d22be2cbbe0U, 0x3dfe45bc3ca22498U,
  0x3d9fd7e53e98379eU, 0x3ec063473dc25056U, 0x3d8dd190be16ac6fU, 0x3d1a4df1bc557dadU,
  0x3da6a8f93d515e77U, 0x3e2898e53e433542U, 0x3e5889e6be3ce4e9U, 0xbd6fa31dbf0d068cU,
  0xc01a90253eac8f18U, 0xbd2c7cc33e9869bbU, 0x3bc13180beabbc3cU, 0xbed3d3cdbda3b338U,
  0xbf8320523f05d027U, 0xbb949aec3f0b853eU, 0x3e851f17bee459d7U, 0xbdc429083e1c0946U,
  0xbfeec07bbdea5b31U, 0xbe28a4a33e910a5aU, 0x3eb500c0bf51d69aU, 0xbddf68683ef99426U,
  0xbec651de3d9ce3a1U, 0x3eb9dca5be93be89U, 0xbe3245bcbeedf719U, 0x3cfc4bda3dc02aebU,
  0x3eb699253e935b97U, 0x3f03652c3e310b8dU, 0xbf01868c3db3a3f9U, 0x3e991f1d3dac2678U,
  0xbe56a609bebb35daU, 0x3de2233d3e57bcd5U, 0xbd848d11bedb97b7U, 0xbd7f03563dc0d317U,
  0xbed0121abe94b8fbU, 0xbf8c8c8bbf02f105U, 0xbec5bed4be5940feU, 0x3e2379cf3e20672fU,
  0xbdd44faebf00c5eaU, 0x3e57fb2bbd45cbb1U, 0x3e294eca3de306a0U, 0x3e6646ad3ec611f2U,
  0xbe0e7d18bec4883fU, 0x3e4df8da3e4ecae2U, 0x3e8218c5be463b9aU, 0x3cfd09543e985609U,
  0xbe861131bd7e9fa2U, 0xbe4829abbe1b802bU, 0x3d4fd6e0bebde69bU, 0x3ea121a23ed7ae07U,
  0xbf85273dbe90d53fU, 0x3f3f7eae3d48c42cU, 0x3e9eb9c4be9c4bd8U, 0x3e745485be2ebe47U,
  0x3ef30279bdc82e93U, 0x3ef1e731bdf752fcU, 0xbe397392be34b24fU, 0x3e910f95bf7b4ccaU,
  0x3d9b9d293f8cc511U, 0x3f595db63f11437cU, 0x3f87599ebce63faaU, 0x3f4e3f4e3dab382bU,
  0xbe8acee63e4ba8bfU, 0x3ebe63053f208f01U, 0x3eae05713e0d6902U, 0x3f1a180dbeaaaa1bU,
  0x3e04ebe6be8c848dU, 0x3f2cc7d63ea04d2dU, 0x3f2ff49fbdfc160fU, 0x3f1badacbe8fe9a2U,
  0xbf2e31c5be90609bU, 0xbeca102b3ebaac14U, 0xbe7b3f653b142e00U, 0xbeb3ea293e6709d3U,
  0xbf09fdedbe8e5dd8U, 0xbef7ba313ee119bcU, 0x3b54b119bcf4bd7cU, 0xbeef2aa8bd9fb0b1U,
  0xbd498430bef2c7f9U, 0xbe147b653ea0b99cU, 0xbea2f0ef3f2cc586U, 0xbed3be0cbf5b1531U,
  0x3e9f7fb1bf45eb92U, 0xbf6d0057bdb3c38bU, 0xbe269a0dbc6d1cb4U, 0xbe3640a43e860566U,
  0x3e2b4630bf514752U, 0xbfc02801bd938433U, 0xbd9516463e41d685U, 0xbdd55b63be948283U,
  0x3ed242c43e9c5239U, 0xbf14e9b1be87bc9aU, 0xbf61d6f73f4fcd45U, 0x3efe3e91be8959f9U,
  0x3e960409be16a720U, 0xbe340a36bbfbd368U, 0x3d4e5090be2056ccU, 0x3e6f9dd23dc629d2U,
  0x3e0db621bae6a302U, 0xbd0e9b7d3dc6d7d2U, 0xbe2f711bbe75c194U, 0x3e050b2c3d9d7dd1U,
  0xbe37194dbe538c02U, 0x3e6bc5013d5a897bU, 0xbe916f1f3cbd3bc4U, 0xbe7964e2bec54d84U,
  0xbe2f14503ef3a71aU, 0x3d7545d2bedc8b4fU, 0xbd92a87e3dfae67cU, 0x3dd4e7823db4ca50U,
  0x3dcab0e7bf1dd92dU, 0xbf6030b1bd711795U, 0xbcbf8f503e705784U, 0x3de367e03ccfff5cU,
  0x3f41f9e9bf109db0U, 0xbe7013e4bea3f5b5U, 0xbf05db673e9933b2U, 0xbe2ba48e3d8552d0U,
  0x3f0df0113ea044dbU, 0xbe8e7d54bcc10650U, 0x3da0fc89bea5e1b9U, 0xbda70d4bbead42e6U,
  0x3dc841a1bed66cc5U, 0xbf356954bd904d88U, 0xbe72ae27be67db90U, 0xbe26164ebef82813U,
  0xbf96bb493e61c3a9U, 0xbeeae006bed9a11eU, 0x3dc087493df362d9U, 0xbe48ee39bd6d06f6U,
  0x3e4005c5bf35f5ccU, 0xbefda4523e0be6dbU, 0x3ebfab2d3b22b59fU, 0x3db5d000be9d11e9U,
  0xbec32026bde1f4eaU, 0xbe7cdbdabe3abb2cU, 0xbe6e8859be19013cU, 0xbeb84a7ebe8eb2b6U,
  0xbf03a012becf30bfU, 0xbbd37fe3be806534U, 0xbdbd6330bdd3692aU, 0xbdcf43b13e93ae6fU,
  0xbf6d28e3bebcd11eU, 0xbf25ad32bd464de3U, 0xbe7d6123bf15c325U, 0xbbef0a803b9dd9eeU,
  0xba32d9f4be58d23bU, 0x3c38c3f2bf3ee97eU, 0xbe43cf63becc67e2U, 0x3e55daa1bf1f2b51U,
  0xbf49d687bde1f161U, 0xbe0cb147be95c260U, 0xbef06c6c3e19d56aU, 0x3d13c9fabec85b89U,
  0x3e99dc09bf0de9a1U, 0xbf19e8de3e17cc58U, 0xbf09a817bb27c9b6U, 0xbe8cc050be1f9209U,
  0x3e148bfe3e820f1eU, 0xbf93bf7a3d78f206U, 0xbf102d54bdeb3559U, 0x3e010e9b3e1e8da7U,
  0x3e8dae82bf0699f2U, 0xbf4309a4bd3cffc3U, 0xbf45d1463cfd6fc8U, 0xbded3b4f3e97725eU,
  0xbde892adbcf21e64U, 0xbe34769e3e3fa30cU, 0xbde511943f5a440dU, 0xbc80396c3eef1f91U,
  0x3e9bcdc6be137825U, 0xbf9c13923e1115c2U, 0xbe57c8f23f716fe9U, 0xbf8896ee3ebdc251U,
  0x3e763d2fbf42259dU, 0xbd8413ed3e9a89c6U, 0x3dd567cc3f658010U, 0x3e66f7433f8905d8U,
  0xbdf56bf7bd3ac062U, 0xbe51e7b7be86575aU, 0x3e4e23ea3e2b4447U, 0x3f12de783e1682e3U,
  0x3e6f18b0becf405cU, 0xbcd83f04be8ebb0bU, 0x3db6cc033ebe90f6U, 0x3ea9c87d3d90e3b4U,
  0xbe5a67cbbe0e6f09U, 0x3d690d963e022a22U, 0xbdb3d9893e87ae6fU, 0x3f197500bddb3133U,
  0x3d4df4de3d18b232U, 0xbf2b9fcf3ef6f965U, 0x3d3e2d6c3ef35f80U, 0x3ef60c433e17ef36U,
  0xbe82408b3e02e77cU, 0xbe7c2c7dbddf0865U, 0xbe600e153f1c592dU, 0x3f57948ebf48b55fU,
  0x3e1fd178bdb712d0U, 0xbf2f309a3e3b73beU, 0xbd90292a3f0c22d4U, 0x3f0344ba3e419330U,
  0x3e278c963ec627aaU, 0xbe8bfa50be0244fcU, 0xbe8cfb5abddfc9bbU, 0x3c5bdd133ea384e2U,
  0x3df821be3b3b366eU, 0xbe298262be4c45ccU, 0x3e3e586bbdc254fcU, 0xbe94232abf8633b9U,
  0x3eaae12a3d19d132U, 0xbf15c71fbe8a94f2U, 0x3b11aee9bea70933U, 0xbe91fcb23f55d2f1U,
  0xbf4d4ff83ecc2f66U, 0xbf2db40bbee2c77aU, 0x3bfb417dbeb28bacU, 0xbe9b6427be82bbeeU,
  0xbf796904bec1fd41U, 0xbead9c273e175ecaU, 0x3f02e1e2ba4da0f0U, 0xbd87ee81bf160944U,
  0xbf0bd65abd699948U, 0xbd97b60abe9de009U, 0xbecd51163dbee5e1U, 0x3e1871d9bf6cd91eU,
  0xbf096bf7bf351fcfU, 0xbe842eb8bf2d6287U, 0xbc432d5dbe14ae95U, 0x3cc6be8abee57f6aU,
  0x3ef7f731be524f34U, 0xbebea930bf2c0af3U, 0xbe320128bdd75d8dU, 0x3dc548f0be1b7d0fU,
  0xbe98d5edbd254b6dU, 0xbf0378c0beaa07a1U, 0xbcd24c7ebe8bbed4U, 0x3b9cbc59bf1d0fe0U,
  0xbe35e2d03e433f24U, 0xbe000a5abe90677bU, 0xbea6cc69bdd7a0a6U, 0x3d13ebf9bf0b1d13U,
  0xbf794a2a3e76a16dU, 0xbe8443d23d90a39fU, 0xbeab4581bdb280cdU, 0xbe0d4d80bed2c402U,
  0xbe500f03be71ec04U, 0xbdced4b43e9c091aU, 0x3cee36a13e159c6bU, 0xbeb18aa9bee39395U,
  0xbf4c9c92bec542f4U, 0xbeee7f4fbe4b5f92U, 0xbea20463beb7eabeU, 0xbeec1559beb0d1a1U,
  0xbebe4792bf431e9bU, 0xbf8945f93e90099bU, 0xbeac6ecf3df7fc2dU, 0xbe314b803b14f374U,
  0xbe2bd36abf553a13U, 0xbf22d2de3e8de6e5U, 0xbf10fb2a3ecec973U, 0xbe3377cd3eb48b8cU,
  0x3edc420fbe1819d4U, 0xbefdbffc3e8d6cc8U, 0xbf1599963e04b5d1U, 0x3d1b675abefa9472U,
  0xbf2873a03e23b57aU, 0xbdda6742bf5b4885U, 0xbf5294a0bf582475U, 0x3dadf4643ee1dfdcU,
  0xbe86fba4beaaa509U, 0xbd1812073ee20aa5U, 0xbe828808be5477acU, 0x3eaa638fbee7f531U,
  0x3ef7b3653d1dcee1U, 0x3e2581643e017effU, 0x3e8005ce3eadd61dU, 0xbdf999efbed5037fU,
  0x3ebe2cae3d2223a7U, 0x3e805ef4bf819665U, 0x3ea201473e06950fU, 0xbe259505bf00e646U,
  0x3f1876123db8be02U, 0x3eb459b0bf0d2289U, 0x3e2c22803eb82a02U, 0xbeceab13be2ec270U,
  0x3e3fc532bdc2b627U, 0x3f1d10313ea0c707U, 0x3e5fb5fb3e170af4U, 0xbe5e0993be33c0b0U,
  0x3ec4d2b1bd21e28cU, 0x3eefd8a8becfd0d0U, 0x3e632aaebddcba77U, 0xbdb39d01be696d81U,
  0x3e91941e3e6109daU, 0x3f2b98d4be9a0ce8U, 0x3e99bc433ec9092eU, 0x3c4554d23f075553U,
  0x3eaf921dbde0abb7U, 0x3f106e823defadc3U, 0x3e8d82483e8a0db8U, 0x3cf786033e64a348U,
  0x3e159b16be594164U, 0x3e6edbb5bdfb4b3dU, 0x3e034b453e524442U, 0x3ebedb773e0997feU,
  0x3ddea4a13d8f87acU, 0x3ef3fdbfbe3d7ee5U, 0xbde43d363eb9b97bU, 0xbe573ea83ec4db5aU,
  0x3d89bb5a3dbc3d98U, 0x3f13a190bee9c1abU, 0xbdea8c093d3aa4f5U, 0x3d1a727fbd64f92fU,
  0x3e90849fbc5546adU, 0x3f2616e6bec49ecdU, 0xbd9cf83abd932e68U, 0x3d13d1efbdcf3108U,
  0x3f2033cfbe2621f2U, 0x3f16fd463ccc19a2U, 0x3b81b42bbe36ba77U, 0x3e36bfe1bf017a82U,
  0xbe8adefa3e0276ceU, 0x3e98f3bebf0b0cf5U, 0xbe9825603e68000bU, 0x3e58b39e3d2d7097U,
  0xbf20fdda3c2da35dU, 0xbe36e681bea70103U, 0x3d85b4c23e439d36U, 0xbde902653db14965U,
  0x3d8fce21bebf31c6U, 0x3e77bd583e569192U, 0x3cbb22e03d9f9073U, 0xbe18e4ecbeb1c9e7U,
  0xbe5a5d953def5f2fU, 0xbe1bb6d7bcf263e9U, 0xbf21af0cbd8d2eb9U, 0x3e1ba5683d82767dU,
  0xbe47caa03d8de6b9U, 0xbf16478abe107842U, 0xbe24cad33e1c400dU, 0x3e7e29373f04d01dU,
  0xbee5b5b3befe131bU, 0xbf0187713ab74c9eU, 0xbeb9b44e3ec35107U, 0xbaf22077bdcc7bd2U,
  0x3e3aa0b43e085e71U, 0xbe241a593d771eafU, 0xbee4688939db5158U, 0x3e533bfa3ec43664U,
  0x3d238147bdb764b8U, 0x3f072e783f00392dU, 0xbf07d324bd48735aU, 0x3eafdbc6be9dd234U,
  0xbf83ec92beb1cc9eU, 0xbf951ee63cf684fdU, 0xbe6a130ebeb4933eU, 0xbe96845ebf669d67U,
  0xbc7d6bfc3d3cb0fdU, 0x3e3e00703f10f175U, 0xbdcfd6983df3d34dU, 0x3e7afc503eaff12eU,
  0xbd44879ebe2f5485U, 0xbe473a393ebea059U, 0xbd4424463e75b168U, 0x3d2da2e3bf419dbaU,
  0xbebace9ebebe50feU, 0xbeace2debd1f5bf1U, 0xbf1102efbedb0381U, 0xbd9073fbbfb9a022U,
  0xbc1bf8ae3e5a5cabU, 0x3d8e101f3b325532U, 0xbe3f31e63e3be30eU, 0x3eba085abcbd4fc0U,
  0xbd5c54203d22c00cU, 0xbdf5d4f23e9749cdU, 0xbcc96b75be101350U, 0x3dc598f83dfc5cdeU,
  0xbe30529abe61d20aU, 0xbe94bf753eae1042U, 0xbe46bf67bf7faa8aU, 0x3dd3b906bf29df9cU,
  0xbed61029be7c55ceU, 0xbf2012123e8fdfbeU, 0xbee9afeebf26bea2U, 0x3d6e4d693d85905dU,
  0x3d426f6ebf4d80b8U, 0xbf3179afbf75a651U, 0xbe1f505cbe04cb83U, 0xbe768de6be4c370aU,
  0x3e323930bea2887aU, 0xbf8b8ca53d8e893fU, 0xbf102498bee7a1bdU, 0xbef36446bf82ba2aU,
  0xbddda360bef3cdb5U, 0xbf47a197bece83dbU, 0xbf3fd44dbf0c0ba0U, 0x3e27622ebdf63cb4U,
  0xbdba271dbf02c311U, 0xbec5d4ec3d138008U, 0xbe6ab3a4bf242db1U, 0x3e24628dbe11ac7aU,
  0xbdff1523beb3bc2aU, 0x3f2d710f3e1c6c5aU, 0xbdba3134be66166fU, 0xbe5957c5bf3066a7U,
  0x3f2f74673d0d20e8U, 0xbea1459dbf05b091U, 0xbd6a9ffd3ea7dcf7U, 0x3e96a6873ef44260U,
  0xbe154f4dbe2f17cfU, 0xbe2e48373f2d3afcU, 0xbdf65386be150d38U, 0x3f923dc93ed485a7U,
  0xbfa69e3cbd2310b9U, 0x3f0b5bc03e8d64fbU, 0xbd094546bf24467fU, 0x3ee82c75be8016c3U,
  0xbd4b6e943e2050f9U, 0xbc609b05bdf68e56U, 0x3bf6f9a5bc13e49eU, 0xbe3fb4683dfb73d6U,
  0xbdeddb80be4aa1b0U, 0xbd045fb4ba94d2c8U, 0x3e6f301c3d13593cU, 0xbe8f14cc3cd8d12bU,
  0x3b00a1793d23df1dU, 0xbe52fc27bea1d471U, 0xbb3f8e603d008e2bU, 0xbe0bc9c0bb41a75dU,
  0xbeccee02be9a7570U, 0xbed36c64be497af7U, 0x3d990feb3d5095bcU, 0x3d8d7591be99b3edU,
  0xbddb8556be5f9db3U, 0xbe0f2561be93986eU, 0xbd1f3bfebe77d5d2U, 0xbdd4c7173cb01855U,
  0xbe3c0b7dbda7930bU, 0xbe409b99bdaa0fccU, 0xbe22564fbd93c378U, 0x3d609cd6bd404989U,
  0xbebb373ebd310efaU, 0xbe4c879bbda6516eU, 0xbd893d2cbe9baa22U, 0xbe2bb73fbe0e1cafU,
  0xbece08663e04c7f5U, 0xbd6f6ca4bd22e313U, 0xbdee306abe4cefeaU, 0x3d020b88bdce3cabU,
  0xbe5722bcbd8f9b70U, 0xbdba144dbe2ee477U, 0xbdae52f2be9f8f4bU, 0xbe81eaa5be99eaccU,
  0x3ed33c50be9b29a5U, 0x3eaf9efcbf86c3b8U, 0x3d6def1cbe9f2d92U, 0xbead77a13e38c28dU,
  0x3d9ebeee3f222368U, 0x3e976710bf2fa635U, 0x3f52ac5d3d348d20U, 0xbe3bf3c13eee4567U,
  0x3e99bdf33f3f991dU, 0x3f5af9343dab7ae9U, 0x3ed313433f551de0U, 0x3a73ec3c3e567383U,
  0x3def9e313e722735U, 0x3ee3c091bf6bf4e3U, 0xbdb52b2d3e38eabcU, 0xbd87a5013c8f9d57U,
  0xbf4392173eca2013U, 0x3d326e1e3b782ef7U, 0xbe8ee0d43d44dba0U, 0x3e079047bddf367cU,
  0xbf9de7453e8c40a1U, 0xbe8e0ca03e33b251U, 0x3ecae07fbd953eb2U, 0xbe32fad43e2408efU,
  0x3f05b69ebf5a4a00U, 0xbeb94824bf2688c1U, 0xbea896fa3f16ba0bU, 0x3d867233bd463631U,
  0x3de569223eabbd95U, 0xbf08f962be0f1fc2U, 0xbebd168c3e8b2cddU, 0xbec530303ef46f6bU,
  0xbe756f163dbed6d3U, 0xbf11354b3dbf4b6eU, 0xbf00829c3ea561c9U, 0xbee3f6293dba0508U,
  0x3bd75f353ee4ad74U, 0xbdb8f6c4be5fe039U, 0xbe257d053eef757fU, 0x3d05e4b03ecf2f8eU,
  0x3ed969613ee82da7U, 0x3ed9bb8b3e0e442bU, 0x3e6cb1163e823437U, 0x3ed17b633e0dfe27U,
  0x3e7c958e3f58d27cU, 0x3e9963773ec766b4U, 0x3e903eff3d88a894U, 0xbcafd14e3f8e2ca5U,
  0x3ecd2b883eea1780U, 0xbd6ad803bf1ccc00U, 0x3d413d5dbe12b468U, 0xbdeca823bbf2303eU,
  0xbf81d7983dc5f822U, 0x3e427bc73eaf9c3eU, 0x3e6dd3a0beb7a0f6U, 0x3f30ef06be1d99bdU,
  0xbe29259fbe5af96fU, 0xbe8f1f3b3e062aeeU, 0x3f033fb0be599d1cU, 0xbda249663eaa9381U,
  0xbf807d55bf2ccdcdU, 0xbeec28cdbfa535f0U, 0xbe952fbebf710982U, 0xbf5ede8fbf35f52aU,
  0xc00162123c03916bU, 0xbf6115433e222459U, 0xbec4086bbfbe1007U, 0xbf6a944d3cb1173eU,
  0xbf15f2d8bfb8e15bU, 0xbf4ab349be669666U, 0xbd91f5e1beedb421U, 0xbed11ff3bf07ddcbU,
  0x3e840d533dba97b6U, 0xbeaaec0f3e8d406aU, 0xbef28e78bf3d44c2U, 0x3dcfc7bfbd9322a1U,
  0x3eba89a33f038d6dU, 0x3ca21b463f82e65bU, 0x3d056958bcdb2324U, 0xbe8a33fa3eaf6314U,
  0xbd5a25a23f6548a8U, 0xbc6c7fd2be3130bfU, 0x3fbe766d3ea65c5bU, 0x3dfe91943df0f44dU,
  0xbf735764bedcad15U, 0x3f8e1514be60adefU, 0xbe7df43c3d064d07U, 0x3f132676bf469941U,
  0xbecbe71cbe962cf2U, 0xbe65a5843ebab0a3U, 0xbf23dae0be7fa9ebU, 0xbecd55debe811951U,
  0xbe21d1e7bf849433U, 0xbe11844ebe434a29U, 0xbf846c3cbf278fa3U, 0xbeed82e23f1a43f5U,
  0x3e46db3abeb8cbeeU, 0x3cb14014bec0bf1dU, 0xbfb587713e28dacdU, 0xbef6475d3f175f24U,
  0x3d5e718c3e35026eU, 0xbe4a6b703e822f06U, 0xbe51b8b4bf2b62b6U, 0xbf0e01463e7e942cU,
  0xbe54537d3e79c234U, 0x3e8ad5963f15d34fU, 0xbe7694863e1e5d18U, 0xbe2c0412be4caabaU,
  0x3f09748dbd32a5cbU, 0xbe4f39c63d9552e9U, 0xbd733160beecccfaU, 0x3f3f6b323dbf79f9U,
  0xbeab24213d6cdf68U, 0xbf45010d3e4e77d1U, 0xbd7a2731be37cca0U, 0xbec0e484bdbb043dU,
  0xbdde039e3e62421eU, 0x3ed226be3e9ae791U, 0xbc3bee06bd756745U, 0xbf38f245be993cafU,
  0x3e8f7796bedc1353U, 0x3e80031dbe769ab0U, 0xbe2c58393e0a69b8U, 0x3e35d34f3d0a144eU,
  0xbc8d88ae3ef33281U, 0xbe2007873f03d0d7U, 0xbcf1da7abe575e73U, 0xbda724fd3ecceffaU,
  0xbe4a2d0e3ed5d3c5U, 0xbf08e7943e2895aaU, 0x3f3f782ebe641171U, 0xbe689e3bbe15684bU,
  0xbe97bdee3f36a108U, 0x3edd3799be6b77a7U, 0xbe820c8b3e70a4b0U, 0xbd934f87bedd61deU,
  0xbe8b1085be3c5b30U, 0xbd95081f3e1b000aU, 0xbf2a7fbe3e3a9102U, 0xbf146afc3ec05ac4U,
  0x3db1dea0bf169adbU, 0x3ef464333e9de202U, 0xbeed27413ec66f28U, 0xbd451839be6de964U,
  0xbe7cc65cbf3101c4U, 0xbdc27d74bee60307U, 0xbe28f5e2bde2e7dfU, 0xbf0293bebe509831U,
  0x3f194c933c438100U, 0xbf16b59fbe3ab44bU, 0xbe0990c6bf3e8c8eU, 0x3cfe8b59bd93df0aU,
  0x3f10d4c63db3e9cfU, 0xbf014778be4271b0U, 0x3d9478d5be78d72fU, 0xbe5acf04be7fba92U,
  0xbe1ebff63d6c9936U, 0xbbc4209e3e65729cU, 0xbe64596c3e919ea7U, 0xbe28e369be752ba7U,
  0x3e9f33a43e89ea37U, 0xbef158eebe856d61U, 0xbf55b92a3e9f5ccbU, 0x3ed87b8cbee858eaU,
  0xbe78286abd7412d0U, 0x3e97cc38be225fc5U, 0x3edc19b7be9f86ffU, 0x3f27fbb3be354e0fU,
  0xbeba94da3dc56724U, 0x3eb4cf41bf0162b0U, 0x3cb626d2be216526U, 0xbec9b0063d21eac3U,
  0xbed007373d80e805U, 0x3d922527bf113086U, 0x3f7e41203e8dcf94U, 0x3f36a35fbde13272U,
  0x3ee72a72bf445c1cU, 0x3f7809f1be3402a6U, 0xbf7c1671be20607aU, 0xbe6d3956bf83ceb2U,
  0x3e1053f3bd7b5e3bU, 0xbe2227013eb95afaU, 0xbdf2d04dbec249b9U, 0x3c41d8763f0b2349U,
  0xbc685fefbe9230fbU, 0x3dfa5c17bd862596U, 0x3ed507083ed1cd53U, 0xbc8d45673eaf4072U,
  0xbed13a163e52c112U, 0xbe51c990be9b30e0U, 0xbf042237bf070e48U, 0xbe1e39b73cbab8c2U,
  0xbedf1e69bf3dbfa9U, 0xbf347a6a3d7117a5U, 0xbef52287bd942e66U, 0x3e2ff9243e5939bbU,
  0x3ed922573e3cf595U, 0xbf2f3a48bdc052c1U, 0x3e0e9e7b3cf8e188U, 0x3e417062bece5fe1U,
  0xbd854d1abeb71051U, 0xbeb6dd9abea66c20U, 0xbe3538363f0a1ea3U, 0x3ed023453ebace41U,
  0x3eed48143eb43b1fU, 0x3eb2ddefbd719c42U, 0x3f4390693e2ce0f4U, 0xbced8fc03d2fe8ecU,
  0xbdd2c6cb3e59586aU, 0xbe8d207c3e1532faU, 0x3e572fc5bda7ca90U, 0xbe93290bbcbffeb0U,
  0xbe2aed7dbe24ae27U, 0x3e971731bdb73957U, 0xbe8f61333e7bbaa4U, 0x3e55dc35bd006a8aU,
  0x3e71deecbe9d3dc1U, 0xbe5ecdd53e0d73c4U, 0xbf7754663eb6711fU, 0x3eecb12abf127e6dU,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

