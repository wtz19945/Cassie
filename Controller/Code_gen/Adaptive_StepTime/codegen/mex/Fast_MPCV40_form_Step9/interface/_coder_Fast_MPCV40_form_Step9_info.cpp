/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fast_MPCV40_form_Step9_info.cpp
 *
 * Code generation for function '_coder_Fast_MPCV40_form_Step9_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step9.h"
#include "_coder_Fast_MPCV40_form_Step9_info.h"

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
    "Fast_MPCV40_form_Step9"));
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
    "789ced5d4d6ce34876e674cf5f23d8dd46f63fb349a6078bc66e6661c9962c591d24912cd1b66cfdcbff8b444d9194449b22299292652718f8b2c11ee6b0b9e5"
    "90d9f571b18b207bcb02c9a117c821c746900932498011100441ae4192734851654b6a558b92e89248bd021a6aea89f5553dbffaf8f8ea5515f54632fd064551",
    "5f34fe3d34fefdf4c7e615457d81b2cae3dee7036ab00ccbdfe87d6e0d5da3f216f5e6c07d48fe17bd4f569674bead5b17a220f19966bdccabc685c4d4f9db6a"
    "38b92e488ca4ef5f2a3ca5f29a2cb678ae2ba90822bf2fd4f994dc77b1231817f5ad3ed1ed852932ff1faff1ec79b159a7d49a76d75cb1ff82ead3cf4b4cffdf",
    "b4a91f09a31ff377abd4caadfcfbf41f269ef9e28ca6097c29d692058e9158de972d6b3ac38a7d5f95b20a2fa56459c9c8d6af7d7199e34b555ef2c53846d185"
    "165f2aeabc62f6d9b7c5687a299d8b1f06fda58aacd6bb92c84afdae7fcf31ed7fdb66ff863f517944bddb77958a22bc36a63ebbfafc0a060fe913c9e946b7ef",
    "29bea2177546d523860accefc7f5db6e3bde1ebabe6bc7dbdd767072b32cf277789d19f1aeb07856bf917c063b4a2573e952576b77f76d352556176449f3a519"
    "5d64cae6b56f946e4d9b320b41bbf23f887c16236bc7a4c7cdfcf0661da75fc3e0217b45f2769b4b472ea5dcd9da762cb8add0652d271f24eeda911b8333ae1d",
    "14e69a54fd1dccfd30ee47f7d79e9d7e2fea148fbf83c17b6c484cfdaa9cd012387e6ecf8d3f9f112f88c5b3ec07c9bf9f4c1d774dc8fa7bfb745916cb72dbc7"
    "d7459f28947d75eb6b59d17c3d95587f79727ff7eb9fbf97ff14f8fe9ef066e5fbaf62f0909d21f9c645be72701c0c85775a622192d8d848c9072ce51dbe77cb",
    "785530edb06b5f0f86ae517934f47bab7c10b53e9fdef2f635a67ebb7afa6d0c3ed21392b3c6cb91ba22182f9baac4882b82b6d914443d2919af9bbc2ab073e3"
    "f59fce8817c7e259fd47f2d7d989f9efc3ae827c1f220df98635d47bc013e4f9bffedf7f019e5f549eb7ebd7675b8d78acb2d3dad8cf072f59ba2ead6d9d8a3b",
    "c0f3def3cbccf23b8ef1fafb183ca417241fe2758d6544beadc4e5bac2e882c1b46ee5f50416cfea3f924fccebaf6888b89dfcd1df7df99f80d7ef098f14afd7"
    "38453d3dbea2d96a38910a5f069a4c2cbfb109bcee4d5e7fe658dcfed73178482f483ec4eb46d7adefdd1a7f0961f1ac7e23f9c47c6e6886f03c0ef0f73de291",
    "e2efeae6e625170ed0f4697badb5b3b72f244ed48287fcf20ee67e88b78feeefc2c5db79adc628ee8db73bc1f77dcf7f5e34fee3eb29852cdf5f7f14fd1ce230"
    "6ee7fba4ff2cd2bc8c05247fc09fb9d05769966f8bb477f81ec6eb689e9ed5bebe81c1437a41f2217f5d62d4aa20b1b5f359f97bb8e0da818a53f197ed317848",
    "8eb307e30faff29ccff2d67b3efbb0eb7eab24c34008f2f9979f15fe11f8fc9ef048f1f965fb221961b62ad5753f9ba5e5e2d956337ce1213e77ebf8c5fdfded"
    "dadb434cbbd17cea3706befd206a7d3eed7d3ae79fbf8569c7634362eaaf22cab299a5eb56ffdce1f81c2f569a92afab14e2f1b95f1d3c05ffdced7cbed10867",
    "f71b6262fd7cb3b69fdf2eea8d4482ddf20e9fc378edb7aff721ff8582fc9751ed86fc17327890ffe24cfdc0ebfdf6f56dc778fd3d0c1ed20b928fc87f61d415"
    "e49dcfee9f0f17bbf1979b29f150fdd13178483e31af7f68a908d908413effd9d13781cfddcee7e55a28772c893a5794eb7453da0994e9cddd6de073aff3f98f",
    "30f5d9d5cb773178482f483ec4e78ca28897c52e63a1a9e1a4941319162d8d1e97c76fb77d5f1ad33e24aff45a51aa311227decdcffe6246fcf4187c249f98ef"
    "f11aec1a14417b8aff601df266dcceffa9dd3df6a4918bc44ed241555b5384b55678d743eb54611c8f6effa0ddad78cecf9f367e7333235e148b077ebe3d3cab",
    "2c0b1ef8f9ced40ff932fdf615bae5f31f62eab3ab9727183ca417241ff6f3358d57f5434614b8a270c5c7d46aef776e8dcbd3583c4b0f483eb91ff08aa6483f"
    "ff21fffd1ef148f17b5a28278bbbf4a9b253dfa62391cd7cebe22a12f70ebfc3f81d2c03f6761d85f9570ae65f47b51be65fc9e0c1fcab33f5cf1aafc90d5d53",
    "7dbf33f588e48ef0fc134133e555951189da5df484585ea4d9c30a05799103ef755da510df27ec97c0dfeee7eff5765adc3a6f7167c9d0717b9753d782523104"
    "79911e1caf66712e7f06fc721c1ef8e593e1596559f0c02f77a67ef7f9e565b929711a59bf3cef18dfff26060fe90bc95fe1fba4f942c2ab71d1500ce59cdffe",
    "e6d0f55d7bdeecb687ad31dd895ba7f83e86c5b3fa8fe453f07dbf86d0b61324f9e9e3af3d8278bbdbf97e4b4ae5366347992ba1dece9e295c3dab672e3d146f"
    "07be1fddfe41be3f702c0e33ce9f36fa5f67daf3e3f359dfebd6b178963d20f964ef755da5109e6fb9fee5d781bf5dcfdf6ac3af9c095a30560fe5c252ae7c1c",
    "d83bd43cb4df23f0f7e8f60fce9b92e56f4102fe7e85bf0589347fff0df0b7fbf9bbca9c84b381a34c235c8ee9f175261be483790fe533027f8f6effa0ff7de8"
    "58bce55b183ca42f241f8eb7481cdf4e4a7a811765c594cf6b7deaacf6b237060fc967d95f684059e4e3ecff454b1067773befa7525bf1702cadee565275ad9e",
    "abd562c7ab571ef2db5f62ee77fc5c56e7c6f1938a28337a8935e3a925f3fc5b4690b412fa512f104dd42e3bbc63cf856f62f0903e917ce8b9d05549daf84eec"
    "c9e7e5f7dfcc88f77b583cabff483eb11f71a721d2fe3fac67ba473c52cf81d6462018e677f7b29544443f0d3385545ca87b68bef5ef31f7dbd5238ba91fe911",
    "c99d7c0e085a4913aa12cf0d933f45d81e5fb010d7b18907719d69f1acb22c7810d771a67e58c7345806ed6d1b78db261ef0f6b4785659163ce06d67ea07de1e"
    "2c83f3a869c883b189077930d3e2596559f0200fc699fa17e1dc62fcbe304f5a8cda3d74a3a4a832d7dfeee79876396b6f7771926b4c7d76f5f45b183ca42724",
    "37f45132e8aa54915551969592dce2d58a285f94d81acf9e2feffce9b09d588ffbd7a88afcfce9dffec75bc0f76ee77b6d8f6ed389ababdc6e7b2d985ef3c7f3"
    "b155bf87ce59fa67ccfd76f5d8c0d48ff488e40e8ee327afff41a9c68b0aaf0ef5f339a61f8b1a8f19e7670b5a4530af9d1a0f5fc7e2597f4724c7e4f338e6ef",
    "af8e6907928fb3a78ad0e63945361aea3355358f754bb0ffc03de291e2ffe2a522d4d71b85a355a1cc0593a7f95c7ab5e5a1fd7e61bcf6db97ff96bf154c7d76"
    "f5f285a16baaef77a65e905cd0246b1dbd7ea9987bbabb35efe51916cfea2f924f64077daa99c379e77f09792feee7efedc0f965b15115c4f87efcbcd0d8acee",
    "9f1fd01ee26ff0dfedf5d39e7d26212e6f130fe2f2d3e2596559f0202eef4cfdc0f3f6fa69cb3eafc9f23ce4cd40de8cd7f1206fc699fa5f62ee777c3d5377b0"
    "c6194d13f852ac250b1c23b1bc2f5bd6748615fbbe2a65155e4a19f49d91ad5ffbe232c797aabce48b718ca20b2dbe54d479655fa8f3be2d46d34be95cfc30e8",
    "3759bfde9544889fe7719d8a3a65975fc1e0217d2279b2d1ed7b8aafe8459d51f588a102f37b52cf99e1fd233b33e25d61f1ac7e23f90c76944ae6d2a5aed6ee"
    "ee43477b69bde78879ed1ba55bf2f1a0ebe883c867f0fcb8273c62cf0f5a3accb6b78a5ac2bfb719aa070ed8da7ad043f1a00ee67e18f7a3fb6bef799275ec7d",
    "e11d0cde634362eab797ea34b7e7069c0b76cbf71f453f87f8bfdbf93ee93f8b342f6301c91ff0672ef4559ae5dba287f2773a98fbbdcaf70aa63f76edf401a6"
    "bf8f867edf2dd15cb4fb799d738cff1f62f01f1b1253df4cd9defadf45e5ff352c9e654f483ed1f9ef8652e6e0efbf38780afcef76fe6f94cb5c25a894b3fbb9",
    "a29a9757b7b7c554d043f302305efbedeb7dc7f2f3e1fc101c1e9c1f32199e5596050fce0f71a67ee0f5d17999d798faee797f328d6544465d41def9fcd65ddd"
    "4c8987eafffd3178483e31af7f68a908d908413effb37f7d067cee763e3f5bdfce57b9fc6132b295598d1c96f3ebd54a2e0e7cee753eff21a63ebb7af9008387",
    "f482e4437cce288a7859ec32160a4559bf732affff4b63da85e4951e7aa9c6489cc83be6bf6f8dc147f2c9f7cf78557384e7f72f7e2d0c793c6ee7fb58aeaa4b"
    "c1f6fabec22985642aaf9e664ec31ee27b18bf8365d0de763ce7cf4f1ba7b999110ffcf959f1acb22c78e0cf3b537f07733fccbb8eeeef44f3ae2f7af3aed4dd",
    "f9b0cf31f5dbd5f75b18fcc786c4d4b7225f74d722c0bc6bf76b59d17c5d95cc61def5e34f43e0dfbb9dff8f6a877ca8982fae17f6f3cde3c4dee9a15c3cf010"
    "ffbb65bc12e56dea83a8f5f914e6612998871dd56e9887258307f3b0ced47f83b9dfae1e7f17533fd223924fcef34f2aa28ebc56d2f9f077fb17cf69df312b38",
    "41575d1bb771c22e46f23ad20c793effe4937f033e773b9ffb3317e1fabe503fdd130a1cbd97608b95caa587f2256f30f72fefb8a506f81cf7bee0967dcf48f3"
    "38ec7b36335eb72c0b1eec7be64cfd3798fb81c79de1d17787aea9dbdfbd7bbbffb0f14e52736bbcdca97d6d86f62d355542fa3c19e0eb7bc49b95afbf8ac143",
    "7686e4ad064f2b2d568b1c5f046439a715570327a79477f87a61e3a0777cfda422a89a6e6dab4ed6de5e3c772c5e0ee78abc1e0fce159914cf2acb8207e78a38"
    "533ff0fd6019b0b7ce73c7fcf449cf0999158fb49feea1f305e03c907bc483f3409ca9ff0673ff52cf775277719559d72b7d078387f483e4a3d62b6d0a12a30e",
    "e5ee2fca7aa559fdf6d4187c249f6ebdc328cd598f00827ebbf04558b7e47afebfe21939266502a77ab5bab6ed4f67b983a3550ff1ff229cdb8de17fcb732f19"
    "afde8c5eb29bafed6c9ce614f25e66c4f3debc0be4bddc271ee4bd3853ffacbcbe89a91fe911c9a7e07549d6334c26ab268da15c450782909d373d22b6ce48d0",
    "2446a2dc1b8f0962f12c3b40f2c9ce03319542dc1f8778cc3de2919a376dc49ad97af0f238e82fa86bcdf82a1f69d5339477781bc66bbf7d7d1bd615510b3ebf"
    "02eb8a3c8d07eb8a9ca91ffcf1c182f3c7af31f5d9d5d37b183ca427241fbd3f4c4594657bf30d8b1a6f8962f1acfe23f9d4fbc37455b45227c8ef3f837c47f7",
    "f37bb916ca1d4ba2ce15e53add947602657a73d743e7f8dd60ee5fea79d4eb8c63f173bbe7f20df13aafaaf2c0f9a8cf676cc7a4e7b1cedb6fd78cf6f09ccf62"
    "f31ea70f537b5749e4fdf687fff014e647ddceebd2fe499e593bd9390db45a4dfab8b51aa8ef0a71eff07a0773bf57f7fd7a8ee98fb3cf05e7f6f91ac7c75a43",
    "d5cd6bb7c6df03583ccb7e907ca27da04da5905faff62b385fc9fd7c1fdca62b357f287996a503493d9797a4563ce1a1380d8cd77efb726e5faf6f61f0905e90"
    "fc95f87b42ae3382440ffbf1ca8ced9935fff16646fce8187c249f221edfa73192711aea93ce26f8f38bcaef76e757c574ba4caf06e2eb1702cbd29ad2aa9d54",
    "f728eff0fb0de6fe251eb7460911dc4740531855e3dd1a5f8f60f1acbf3f92db7cbe9bca309ff0482d7358a774fd13f6ffc02f5f54deb6eb97af8b859d0b39bd"
    "b11d38d8a986d9f8d56e2159f4503e23f8e5fdf6f51d88abcf88077175a7f0acb22c78105777a67ee0f37efb5a712ccef21b183ca417241f9dff82a2e5f3db0f",
    "e6664a3c54ff1f8cc143f2a9f35f7a364232bff1dfff13fcf345e573bb71958d66aae83f0c64636a32404bc7bb8590540851c0e75ee7f31f61eab3ab97ef62f0"
    "905e907cfc79a7492927322cdffbfda2c4d17f31237e7a0c3e923b716e624f83a4f77b8cff601dfcf945e57fbbfe7c6a778f3d69e422b1937450d5d61461ad15",
    "def5d03e02308e47b7dfeb7efebce2f0e0e7cf8a679565c1033fdf99fa3b98fb211f72747f6dd9a983f990ef60f01e1b1253bf2a27b4048e9f1bef2fd8fa6673"
    "9d444f25c4f723f8f97b79e07bd7f3fd45be72701c0c85775a622192d8d848c9072ce51dbe7f89b9dfae1e254cfd488f483e03dfc70d0fae54e5255f8c63145d",
    "68f1a5a2ce2bfb42dda07d93dfd3b9b841ece676def5ae2442f67c7bb338b70ecaae5d66cb67af3edca8f9f9fb9d19f1fe188b67f51bc949f80d23754b3ecef8"
    "a70f229fc1f3e39ef048c5852a22bbc64bb9405d5a63f35bb9049bd96bd01ecadbe960ee87713fbabff6de17e2e4de1778adc628ee7d5f0861f12cfb41f289f6",
    "43ea2985ac1f71fd51f473785f703bdf27fd6791e6652c20f903fecc85be4ab37c5bf4d03920f0bef0fafed9e3f72cf1f705da8a8515846a0dde171cf61b46ea"
    "96bcdff0e3ff0ec3fb82db9f1f95cc5123de48a5b7738767f456fc60ef5cce173db4feb683b91fc6fde8fedab3d3efc1fc824d3c985f9816cf2acb8207f30bce",
    "d4dfc1dc0f7c3fbabf0bc7f7101f82f8d012e0417cc899fa213ef4fafed9b3cb1cf1f85012e243f79d87366fbfe1af203ee4fee74746495e1577f71a6a912db0"
    "dbd5f3ac5fd5740f3d3f3a98fb61dc8feeefa4f30d383c785fb00abc2f4c8b679565c183f70567eaef60eef72adf2b98fed8b5d30798fe3e1afa7db74473d1ee",
    "e775ce31fe7f88c17f6c484c7d3365ad7bed56fe5fc3e259f684e413ad533794427eddc9f50bd88fd9fdfcdf2897b94a502967f77345352faf6e6f8ba920e48f"
    "02ff0ffd7e24ffbfe8f13fe5dcfab371e7e1da3dc77d49f8bfef9c1eeb3e82fcfff1a721d857c2edfc7f543be443c57c71bdb09f6f1e27f64e0fe5e2411cf8df",
    "adfcff1cd39f455d6f0ce7af58c505fb52c1f92bf78807e7af38537f07733ff0fde8fe92e67bc8ffb40ae47f0ee3596559f020ffd399fa5f62ee877ca0d19fa8"
    "0cd8e50be7f281ecfa21682df47042905bf381fe048b67f51bc949ae331fe538107c7efc0fe4032deef3c3ee383de36317972759a67cccad5da4f4c2ba562f54",
    "203e04e37ee8f7b0bfc47478900f342d9e5596050ff28166abffff014aa02511", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 106176U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_Fast_MPCV40_form_Step9_info.cpp) */
