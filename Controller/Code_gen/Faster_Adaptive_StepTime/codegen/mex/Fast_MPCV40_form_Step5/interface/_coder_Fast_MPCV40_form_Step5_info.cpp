/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fast_MPCV40_form_Step5_info.cpp
 *
 * Code generation for function '_coder_Fast_MPCV40_form_Step5_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step5.h"
#include "_coder_Fast_MPCV40_form_Step5_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties()
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 9);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString(
    "Fast_MPCV40_form_Step5"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.3.0.713579 (R2017b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char * data[41] = {
    "789ced5d4b8ce3c879e6eecc3e0681ed41fcce3ac9cec218d8596324b55ead09124bad5677ab5b6fa99f46a2a6484a6237455224a5963ac1a22f067cd88373cb"
    "219bf4d1b011c0b718480e6320871c0741d6c8260156401004c925be24e790a2aa5bd2a846548b5d12a9bf808186fa55f555fdfdd7573fff7a516f24d36f5014",
    "f545fddf03fddf4ffed278a2a82f50667a3cf87c931a4de3f237069f5b63cf28bd453d1cc987e47f31f8642451e33a9af920f0229769352a9ca23f887483bb29"
    "86951abc488b5aa92b7394c2a992d0e6d8bea4ca0b5c896f702969e86187d71f1a5b43a29b074364fc3f5ee798f362ab412975f5b6bac2f00335a49f9798f63f",
    "b4a81f11a31fe3773eead98dfc07893fda7cee89d3aaca73e5585be2595a64384fb6a26a34230c7d55ceca9c989224392399bff6c425962bd738d113636959e3"
    "db5cb9a871b2d166cf16ad6ae5742e7e10f096ab92d2e84b82cf1ab7ed3bc5d4ff6d8bed1bff44e911f5eeedc3d55e14e17530e559d5e7573078489f489e68f6",
    "db9ee2aa5a51a3152da8abc0f87e5abbadd6e3edb1e7db7abcddaf072bb52a02778bd79b13ef128b67b61bc9e7b0a35432972ef7b5769b6fab25321a2f89aa27"
    "4d6b025d319e3d93746bd89491c8d9d5d5afa8c86731a2764c11ee370bc49bb79f7e0d8387ec15c9cfc3a5f87a257794628a1aa3ee6f16cf9bd9e0f66d3d7253",
    "70a6d583c23c932abf87c90ffd7e727badd9e9f7a276f1f83b18bcc7bac4d0afc2f26d9ee516366efcf99c78012c9e693f48fe8364eaa86f42e6dfdba3499250"
    "913a1eae217804bee269985f4bb2ea19a8c4fccb13e4fb9fbd97ff14f8fe9ef0e6e5fbaf62f0909d21f9fa45beba7f14088577da4221b2b9be9e92f619ca3d7c",
    "ef94fe2a63ea61d5bede1c7b46e9d1d8efcdf441d4fc7c7ac3db5798f2adeae97731f8484f48cee82f47ca335e7fd954445a78c6ab1b2d5ed092a2febac9293c"
    "b3305effc99c78712c9ed97e247f9d9d18ff3eec2bc8f321d290675c4383019e20cfffcdfffe0bf0fcb2f2bc55bf3edb6ec663d59df67a291fe8328986b8b675",
    "22ec00cfbbcf2f33d2efd9c6ebef63f0905e907c8cd7558616b88e1c971a32adf13ad33a95d737b17866fb917c665e7f4543c4ede48ffffecbbf025ebf273c52"
    "bc5e6765e5e4e832c1d4c29ba970d7dfa263f9f50de07577f2fa73dbe2f6bf89c1437a41f2315ed79b6e7eefd4f84b088b67b61bc967e6735d3384e77180bfef",
    "118f147fd73636ba6cd89f489c74d6da3b7b257ef35829b8c82fef61f243bc7d727b972edecea9755a766ebcdd0ebe1f1aff3941ff8f67a014b27c7ff551f473"
    "88c3389def93deb348ab1bf38b5ebf3773a1f9120cd71112eee17be8af93797a5efbfa06060fe905c9c7fc7591566abcc8d4cfe7e5eff184ab074a76c55fb6a7",
    "e02139ce1ef43fbcc2b11ed35b1ff8ece3aefb8d92740321c8e75f7e5ef827e0f37bc223c5e7ddce4532426f556b412f934d48c5b3ad56f8c2457ceed4fe8bfb"
    "fb5bb5b707987aa3f9d46f8c7cfb41d4fc7c3af8b4cf3f7f0b538fc7bac4d05f5590246395ae53fd739be3739c506d899ebe5288c7e77eb9ff14fc73a7f3f97a",
    "339c2d3585cde0f946bd94df2e6acdcd4d66cb3d7c0efd75d8bede87f52f14ac7f99546f58ff42060fd6bfd8533ef0fab07d7ddb365e7f0f8387f482e413d6bf"
    "d0ca33e49dcfef9f8f27abf197eb3be2a1f2a353f0907c665effd05411b211827cfed3c36f029f3b9dcf2bf550ee481434b62835122d71c75f496cecba689f12",
    "f0f9643eff31a63cab7af92e060fe905c9c7f89c9665a15bec33169a1a4e8a398166d0d6e869ebf8add6ef4b53ea87e4d5412dca755a6485dbf9d99fcf899f9e"
    "828fe433f33d5e837d8322684ff11f0661dd8cd3f93fb5bbc71c377391d8713aa0a86b32bfd60eef6eba87ffa11f4faeffa8dd3d739d9f7fd7f8cdf59c78512c",
    "1ef8f9d6f0ccb42a78e0e7db533eac9719b6afd00d9fff08539e55bd3cc1e021bd20f9b89fafaa9ca21dd002cf16f94b2ea6d406bf736a5c3e81c533f580e4b3"
    "fb01af688af4f80febdfef118f14bfa7f94ab2b89b3891771adb89486423dfbeb88cc4ddc3efd07f47d3e8396451987fa560fe7552bd61fe950c1eccbfda53fe",
    "bcf19adcd83335f43b438f486e0bcf3fe155435e536881a8dd458f89ad8b345a58a5605de4c87b5d5f29c4cf09fb05f0b7f3f93bd8490b5be76df62c193aeaec"
    "b2ca5a402c86605da40bfbab91ec5b3f037e390e0ffcf2d9f0ccb42a78e097db53bef3fcf28ad4125995ac5f9eb78def7f1b8387f485e4aff07dd27821e194b8",
    "a02b86b2cf6f7f38f67c5b9f87fdfa3075ba3f716b17dfc7b07866fb91fc0e7c3fac2174ec04497efaf86b8f20deee74bedf1253b98dd861e6926f74b26732db"
    "c86a99ae8be2edc0f793eb3fcaf7fbb6c561a6f9d37afb1b7467717c3eef7b5d108b67da0392cff65ed7570ae1f996ab5f7c1df8dbf1fcad34bdf219af06628d",
    "502e2ce62a47febd03d545e73d027f4faeffe8bc2959fee645e0ef57f89b1749f3f7df027f3b9fbf6bf47138eb3fcc34c39598160fd2d90017c8bb683d23f0f7"
    "e4fa8ffadf07b6c55bbe85c143fa42f2f1788bc8729da4a8153841920df9a2f6a7ce6b2f7b53f0907c9ef3854694453ecefe5f0911e2ec4ee7fd546a2b1e8ea5",
    "95dd6aaaa13672f57aecc877e922bffd2526bfedf7b2dad78f9f540589d6ca8c114f2d1bf7dfd2bca896d18f068168a276d9e36c1b17be89c143fa44f2b171a1"
    "af92b4fe9d30902fcaefbf9e13ef0fb07866fb917c663fe25643a4fd7fd8cf748f78a4c681f6ba3f10e676f7b2d5cd887612a60ba938df70d17ceb3f60f25bd5",
    "2383291fe911c9ed1c0778b5acf2359163c7c99f226c8f2f1888eb58c483b8ce5df1ccb42a7810d7b1a77cd8c7349a46ed6d1b78db221ef0f65df1ccb42a78c0"
    "dbf6940fbc3d9a46e751d3b00ec6221eac83b92b9e9956050fd6c1d853fe32dc5b8c3f17e6499b56fa976e9465456287eb7d8aa997bdf6761b27b9c29467554f",
    "bf83c1437a42725d1f659daeca55491124492e4b6d4ea90ad24599a973ccf9eace9f8edb8939dcbf4655e4e74fffee3fde02be773adfab7b894e62f3f232b7db"
    "590ba4d7bcf17ccce775d13d4bff8cc96f558f4d4cf9488f486e633f7ef2fa1f94eb9c2073ca583b4f31ed58d678cc343f9b57abbcf16c577ff83a16cffc3b22",
    "39663d8f6dfebe6f4a3d907c9a3d55f90ec7ca925e518fa1aa45ec5b82f307ee118f14ff17bb32df08360b873ebec2069227f95cdad776d179bfd05f87edcb7b"
    "c3df32a63cab7af9c2d83335f43b432f48ceaba2b98f5eebcac699ee4e5df7f21c8b67b617c967b28321d52ce0bef3bf86752fcee7ef6dff79b7d8acf142bc14",
    "3f2f34376aa5f3fd848bf81bfc776bedb4669f4988cb5bc483b8fc5df1ccb42a781097b7a77ce0796bedb4649f5764791ed6cdc0ba19b7e3c1ba197bca7f89c9"
    "6ffb7ea67e678dd3aaca73e5585be2595a64384fb6a26a34230c7d55ceca9c98d2e93b2399bff6c425962bd738d113636959e3db5cb9a87172896f709e2d5ad5",
    "cae95cfc20e03558bfd19704c9dfe7918ada65975fc1e0217d2279b2d96f7b8aab6a458d56b4a0ae02e37b52e3ccf8f991bd39f12eb17866bb917c0e3b4a2573"
    "e9725f6bb7f9d0d55eea601c319e3d9374bb8078d07f5391cf60fcb8273c52e347f24c481eaffb9be2b1a41e749a07e92cebe55c140fea61f243bf9fdc5e6bef",
    "0b59dbde17dec1e03dd625867e074b9d16366ec0bd6037ef0b1f453f87f8bfe3f9de7b166975637ed1ebf7662e345f82e13a828bd6eff430f9ddcaf732a63d56"
    "edf44d4c7b1f8dfdbe9fa2b968fff32a671bff3fc0e03fd62586bee98ab5fdbfcbcaff6b583cd39e907ca6fbdf75a5901ff7af5eec3f05fe773aff372b15b61a",
    "902bd952aea8e425dff6b6900ab8685e00faebb07dbd6fdbfa7cb83f048707f787cc8667a655c183fb43ec291f787df2bacc2b4c79f77c3e99cad002ad3c43de"
    "f9e2f65d5ddf110f95ff8753f0907c665effd05411b211827cfe67fffa1cf8dce97c7e16dcced7d8fc4132b295f1450e2af960ad9a8b039fbb9dcf7f8429cfaa",
    "5e3ec0e021bd20f9189fd3b22c748b7dc642a128f37776adffffd2947a217975805eaed3222b70b6f9ef5b53f0917cf6f3335ed51ce1f9fd8bdf08c33a1ea7f3"
    "7d2c57d3c44027589259b9904ce59593cc49d8457c0ffd77348ddadb8eebfcf9bbc669aee7c4037f7e5e3c33ad0a1ef8f3f694dfc3e48779d7c9ed9d69def5c5",
    "60de95babd1ff61453be557dbf85c17fac4b0c7dcbd2457f2f02ccbbf6bf9664d5d357c902e65d3ffe3404febdd3f9ffb07ec0858af962b050cab78e36f74e0e"
    "a4e2be8bf8df29fd95286f531f44cdcfa7300f4bc13ceca47ac33c2c193c9887b5a7fc6b4c7eab7afc7d4cf9488f483e3bcf3fa90a1af25a49af87bf3dbf7841",
    "e78e99c18944cdb1711b3bec6222af23cd90e7f34f3ef937e073a7f3b93773116e94f8c6c91e5f60137b9b4cb15aedba68bde43526ffeaf65b6a84cf71ef0b4e"
    "39f78c348fc3b96773e3f5d3aae0c1b967f6947f8dc90f3c6e0f8fbe3bf64cddfceedd9bf387f57792ba53e3e5769d6b33766ea9a112d2f7c9005fdf23debc7c",
    "fd550c1eb233246f37b984dc66d4c8d1855f92726ad1e73f3ea1dcc3d74b1b07bde5eb27555e5135f35875b2f6f6e2d4b67839dc2bf27a3cb85764563c33ad0a"
    "1edc2b624ff9c0f7a369c4de7aa7b6f9e9b3de13322f1e693fdd45f70bc07d20f78807f781d853fe3526ff4acf7752b7719579f72b7d078387f483e493f62b6d",
    "f022ad8caddd5f96fd4af3faeda929f8487eb7fd0e9334670e0104fd76fe8bb06fc9f1fc7fc9d1524cccf84fb45a6d6ddb9bceb2fb873e17f1ff32dcdb8de17f"
    "d3732febafdeb456b6ba5edbde38cd09ac7b9913cf7df32eb0eee53ef160dd8b3de5cfcbeb1b98f2911e91fc0ebc2e4a5a86ce6495a4de956be84210b2f3a687",
    "c4f619f1aa488b9473e331012c9e6907483edb7d20865288fbe3108fb9473c52f3a6cd582bdb08748f02de82b2d68afbb848bb91a1dcc3dbd05f87edebdbb0af"
    "885af2f915d857e46a3cd857644ff9e08f8f269c3f7e8529cfaa9edec3e0213d21f9e4f361aa8224599b6f58d6784b148b67b61fc9ef7c3e4c5f45cf1a04f9fd",
    "a7b0ded1f9fc5ea9877247a2a0b145a99168893bfe4a6263d745f7f85d63f2aff43cea55c6b6f8b9d57bf9c6789d531469e47ed4d339eb31eb7dac8bf6db55bd"
    "3e1ceb31d97cc0e9e3d4de571279bffdc13f3e85f951a7f3ba583aced36bc73b27fe76bb95386afbfc8d5d3eee1e5eef61f2bbf5dcaf534c7bec1d17ec3be76b",
    "1a1fab4d45339e9d1a7ff763f14cfb41f299ce813694427ebfda2fe17e25e7f37d603b51ad7b43c9b36cc29fd47279516cc7375d14a781fe3a6c5ff69debf52d"
    "0c1ed20b92bf127fdf941a342f26c6fd7879cefaccbbfef17a4efce8147c24bf433c7e486324e334d427bd0df0e79795dfadceaf0ae97425e1f3c783173cc324",
    "54b95d3faeed51eee1f76b4cfe15eeb77a0a113c4740956945e59c1a5f8f60f1ccbf3f925b1cdf0d6518233c52cb02f6295dfd15f37fe0972f2b6f5bf5cb8342"
    "61e7424aaf6ffbf7776a61267eb95b48165db49e11fcf261fbfa0ec4d5e7c483b8ba5d78665a153c88abdb533ef0f9b07d3db32dcef25b183ca417249fbcfe05",
    "45cb17771eccf51df150f9df9f8287e4775eff32b01192eb1bfffd3fc13f5f563eb71a57596fa58ade037f36a624fd09f168b710120b210af8dced7cfe634c79"
    "56f5f25d0c1ed20b924fbfef3429e6049ae106bf5f9638facfe7c44f4fc147723bee4d1c6890f4798ff11f06c19f5f56feb7eacfa776f798e3662e123b4e0714",
    "754de6d7dae15d179d2300fd7872fdddeee72f2a0e0f7efebc78665a153cf0f3ed29bf87c90feb2127b7d7929ddab81ef21d0cde635d62e85761f936cf720be3"
    "fd25dbdf6cec9318a884f879043f7b2f0f7cef78bebfc857f78f02a1f04e5b284436d7d753d23e43b987ef5f62f25bd5a388291fe911c9e7e0fbb8eec1956b9c",
    "e889b1b4acf16dae5cd438b9c43774da37f83d9d8bebc46e1ce7dde84b8264efb7a7283befcfb36a97d9cad9ab831bb5387fbf3727de9f60f1cc76233909bf61"
    "a26ec9cff33e7d23f2198c1ff784472a2e5488b753adea4687f3695ee14269b5037b91b48bd6edf430f9a1df4f6eafb5f1244eee7d8153ebb4ecdcf7851016cf",
    "b41f249fe93ca48152c8fa11571f453f87f705a7f37dd27b166975637ed1ebf7662e345f82e13a828bee0181f785d7b7cf9a5d6689bf2f24cc585881afd5e17d"
    "c166bf61a26ec9bf2ffcfa7fc2f0bee0f4f143d8eb0a9d8d7cbe9962bd6aacd3e9662e337517edbfed61f243bf9fdc5e6b76fa3d985fb08807f30b77c533d3aa",
    "e0c1fc823de5f730f981ef27b777e9f81ee243101f5a013c880fd9533ec4875edf3e6bf17ff2f1a124c487ee7b1ddaa2fd8687bf86f890e3c78f7ca15448efc6"
    "d2ad4ca8aa487b4a24737ebe1377cff8d1c3e4877e3fb9bdb38e27383c785f3013bc2fdc15cf4cab8207ef0bf694dfc3e4772bdfcb98f658b5d33731ed7d34f6",
    "fb7e8ae6a2fdcfab9c6dfcff0083ff589718faa62b6affd9a9fcbf86c533ed09c967daa7ae2b85fcbe93ab17701eb3f3f9bf59a9b0d5805cc9967245252ff9b6"
    "b7855400d68f02ff8ffd7e22ffbf18f03f65dffeb369f7e15abdc77d45f87fe89e1e331f41fefff8d3109c2be174fe3fac1f70a162be182c94f2ada3cdbd9303",
    "a9b80ff11ec7f2ff29a63dcbbadf18ee5f319303cea582fb57ee110fee5fb1a7fc1e263ff0fde4f692e67b58ff692658ff398e67a655c183f59ff694ff12931f"
    "d6034dfe446994df6fe3f7a4fc10b4177a7c419053d703fd2916cf6c379293dc673ec97120387e7c1fd6032deff861b59f32d5ae6f3b76cc4947cd8d7db553d8",
    "4a1ca60f5d74ef7a0f931ffafde4f65a1b4fe07c09580f74df78665a153c580f345ff9ff0fc8662670",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 106176U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_Fast_MPCV40_form_Step5_info.cpp) */