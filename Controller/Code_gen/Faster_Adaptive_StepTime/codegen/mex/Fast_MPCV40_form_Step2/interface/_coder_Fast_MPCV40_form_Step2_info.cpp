/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fast_MPCV40_form_Step2_info.cpp
 *
 * Code generation for function '_coder_Fast_MPCV40_form_Step2_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step2.h"
#include "_coder_Fast_MPCV40_form_Step2_info.h"

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
    "Fast_MPCV40_form_Step2"));
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
    "789ced5d4d8ce3c875e6eeecdf20b03db0d77f5927d95918037bd719fdb6d49a2089d46a75b7baf52ff5afe168289292d84d911449a9d59d60d117033eecc1b9"
    "e59075fa68d808e09b0d24873190438e83201b6413032bc00882e4905b72dd90a2aa5bd2a84694c42e89d42b60a0a19eaabeaad7af3e3ebe7aaca25e49a65fa1",
    "28ea8bfabf7bfabf9ffec4b8a2a82f506679d0ff7c951a2ea3f257fa9f5b23d7a8bc4ebd36540fc9ffbaffc948a2c67534f342e0452ed36a543845bf10e90677"
    "d30c2b35789116b5d285cc510aa74a429b637b922a2f7025bec1a5a4818b1d5ebf686c0d886e2e0c91f1ff789d63ce8aad06a5d4d5dbee0a8317d4807e9e63c6",
    "ff9a45fd8818fd18bf7b9ffac31bf9f7133fd87ce289d3aaca73e5585be2595a64384fb6a26a34230c7c55ceca9c989224392399bff6c425962bd738d1136369"
    "59e3db5cb9a871b23166cf16ad6ae5742e7e10f496ab92d2e849fc8f1bb7e37b8ae9ff1b16c737fa89ca7deaaddb8babbd28c2eb60dab3aacfb73178489f489e",
    "68f6c69ee2aa5a51a315cdafabc0f87ed2b8adf6e38d91ebdb7ebcd1eb072bb52a02778bd79d13ef128b678e1bc9e7b0a35432972ef7b4765b6fab25321a2f89"
    "aa274d6b025d31ae3de3746bd89451c8d9d5d57f7fbefe698ca81d5384e7cd02f1e69da75fc3e0217b45f2e69ecfd714944ea15edf3fa41b29f9e44c398edff6",
    "23370167523f28cc35a9f6bb98fa30efc78fd79a9d7e2f6a178fbf89c17ba04b0cfd2a2cdfe6596e61f78dbf9a132f88c533ed07c9bf9f4c1df54cc8fc7b7b34"
    "49122a52c7c335048fc0573c0df36b49563d7d95987f79827cfff377f29f00dfdf11debc7cff550c1eb233245f3fcf57f78f82a1f04e5b284436d7d753d23e43",
    "b987ef9d325f654c3facdad7ab23d7a8dc1ff9bd59de8b9a9f8f6e78fb0ad3be553dfd01061fe909c919fde14879cceb0f9b8a480b8f7975a3c50b5a52d41f37"
    "39856716c6eb3f9d132f8ec533c78fe42fb313e3df073d05793e401af28c6aa87f8327c8f3bffcdf7f039e5f569eb7ead767dbcd78acbad35e2fe583174ca221",
    "fab74e841de079f7f9654679df365e7f178387f482e423bcae32b4c075e4b8d490698dd799d6a9bcbe89c533c78fe453f3fa0b1a226e277ff60f5ff917e0f53b"
    "c223c5eb7556564e8e2e134c2dbc990a5f045a742cbfbe01bcee4e5e7f625bdcfecb183ca417241fe1757de8e6f74e8dbf84b078e6b8917c6a3ed73543781d07",
    "f8fb0ef148f1776d63e3820d071289938ebfbdb357e2378f95828bfcf22ea63ec4dbc78f77e9e2ed9c5aa765e7c6dbede0fb81fb3f27e8fff1f4954296efaf3e"
    "8c7e067118a7f37dd27b1a695dc402a237e0cd9c6bbe04c37584847bf81ee6eb789e9ed7bebe81c1437a41f2117f5da4951a2f32f5b379f97bb4e0fa818a5df1",
    "97ed0978488eb307fd0faf70acc7f4d6fb3efba8eb7ea324dd4008f2f9579e14fe19f8fc8ef048f1f945e73c19a1b7aab5352f934d48c5d3ad56f8dc457ceed4"
    "f98bfbfb5bb5b77b987ea3f5d46f0c7dfb5ed4fc7cd4ffb4cf3f7f1dd38f07bac4d05f559024234bd7a9feb9cdf1394ea8b6444f4f29c4e373bfde7f04feb9d3",
    "f97cbd19ce969ac2e6dad946bd94df2e6acdcd4d66cb3d7c0ef375d0bede85fc170af25fc6f51bf25fc8e041fe8b3ded03af0fdad7b76de3f5773078482f483e"
    "26ff85561e23ef7c7eff7cb4588dbf5ccf8887da8f4ec043f2a979fd035345c84608f2f9cf0ebf097cee743eafd443b92351d0d8a2d448b4c49d4025b1b1bb0d",
    "7cee763eff31a63dab7af92e060fe905c947f89c9665e1a2d8632cb4349c147302cda057a327e5f15beddf9726f40fc9abfd5e94ebb4c80ab7ebb3bf98133f3d"
    "011fc9a7e67bbc067b0645d09ee23f5c83bc19a7f37f6a778f396ee622b1e3745051fd32ef6f877737ddc3ff308fc7f77fd8ee1ebbcecf9f357e733d275e148b",
    "077ebe353cb3ac0a1ef8f9f6b40ff93283f615bae1f31f61dab3aa9787183ca417241ff5f3559553b4035ae0d9227fc9c5945aff774e8dcb27b078a61e907c7a"
    "3fe0054d91beff43fefb1de291e2f7345f4916771327f24e633b11896ce4dbe79791b87bf81de6ef7019de872c0aebaf14acbf8eeb37acbf92c183f5577bda9f",
    "375e931bb9a6067e67e811c96de1f987bc6ac86b0a2d10b5bbe831b1bc486384550af222879eeb7a4a21be4fd8af80bf9dcfdf6b9db4b075d6664f93a1a3ce2e"
    "abf88362310479912e9caf46b12f7f06fc721c1ef8e5d3e1996555f0c02fb7a77de7f9e515a925b22a59bf3c6f1bdfff1e060fe90bc95fe0fba4f140c2297141",
    "570c659fdffedac8f56d7f5eebf587a9d3bd855bbbf83e86c533c78fe433f0fda086d0b61324f9e9a3afdd8778bbd3f97e4b4ce5366287994bbed1c99eca6c23"
    "ab652e5c146f07be1fdfff61bedfb72d0e33c99fd6c7dfa03b8be3f3799febd6b078a63d20f974cf753da5105e6fb9fad5d781bf1dcfdf4ad32b9ff26a30d608",
    "e5c262ae7214d83b505db4df23f0f7f8fe0faf9b92e56f5e04fe7e81bf7991347fff1df0b7f3f9bb461f87b381c34c335c8969f1353a1be4827917e533027f8f"
    "efffb0ff7d605bbce55b183ca42f241f8db7882cd7498a5a811324d9902feafdd479ed656f021e92cfb3bfd090b2c8c7d9ff2b21429cdde9bc9f4a6dc5c3b1b4",
    "b25b4d35d446ae5e8f1df92e5de4b73fc7d4b7fd5c56fbe6f1c3aa20d15a9931e2a965e3fc5b9a17d532fa513f104dd42ebb9c6df7856f62f0903e917ce4bed0"
    "53495aff4ee8cb17e5f75fcf89f7c7583c73fc483eb51f71ab21d2fe3fbccf748778a4ee03edf54030ccedee65ab9b11ed244c175271bee1a2f5d67fc4d4b7aa",
    "4706d33ed22392db791fe0d5b2cad7448e1d257f8ab03d3e6320ae63110fe23ab3e2996555f020ae634ffbf01ed37019b6b76de06d8b78c0dbb3e2996555f080"
    "b7ed691f787bb80cafa3a6210fc6221ee4c1cc8a679655c1833c187bda5f86738bf1fbc23c6cd34aefd08db2ac48ec60bf9f62fa65afbdddc649ae30ed59d5d3",
    "ef63f0909e905cd74759a7ab725552044992cb529b53aa82745e66ea1c73b6baeba7a37662deee5fa22af2eba77fff1faf03df3b9defd5bd4427b1797999dbed"
    "f88369bf379e8ff9bc2e3a67e95f31f5adeab189691fe911c96d9cc70f5ffe83729d13644e1919e753cc3896351e33c9cfe6d52a6f5cdb351fbe8ec533ff8e48",
    "8ec9e7b1cddff74de807924fb2a72adfe15859d23bea3154b588f79660ff813bc423c5ffc50b996fac350b873ebec2069327f95cdad776d17ebf305f07edcb7b"
    "c3df32a63dab7af9c2c83535f03b432f48ceaba2f91ebd76211b7bba3b35efe50916cf1c2f924f650703aa59c079e77f0b792fcee7efedc0d945b159e3857829",
    "7e56686ed44a67fb0917f137f8efd6c669cd3e931097b7880771f959f1ccb22a781097b7a77de0796be3b4649f5764791ef266206fc6ed789037634ffbcf31f5"
    "6d7f9fa93759e3b4aaf25c39d69678961619ce93ada81acd08035f95b33227a674face48e6af3d7189e5ca354ef4c4585ad6f836572e6a9c5ce21b9c678b56b5",
    "723a173f087a0dd66ff4247ef2e779a4a276d9e5db183ca44f244f367b634f7155ada8d18ae6d755607c4fea3e33ba7f64774ebc4b2c9e396e249fc38e52c95c"
    "badcd3da6d3d74b497dabf8f18d79e71ba251f0fbafafcf3f54fe1fe714778a4ee1f87f1fa7a3a51daa73b67a2f72c59df2f32742bee9efb4717531fe6fdf8f1",
    "5a7b5ec8daf6bcf02606ef812e31f4db4f755ad87d03ce05bbe1fb0fa39f41fcdfe97c9ff49e465a17b180e80d7833e79a2fc1701dc145f93b5d4c7db7f2bd8c"
    "198f553b7d1533defb23bfef95682edafbbccad9c6fff730f80f7489a16fba62edfddf65e57f3f16cfb427249feafc775d290bf0f79fed3f02fe773aff372b15",
    "b61a942bd952aea8e425dff6b6900aba685d00e6eba07dbd6b5b7e3e9c1f82c383f343a6c333cbaae0c1f921f6b40fbc3e3e2ff30ad3de1def4fa632b4402b8f"
    "9177beb8f7aeae67c443edffc9043c249f9ad73f3055846c84209fffe5bf3f013e773a9f9fae6de76b6cfe2019d9caf8220795fc5aad9a73515c1ef87c3c9fff",
    "08d39e55bdbc87c1437a41f2113ea76559b828f6180b85a2ccdfd995ffffa509fd42f26a1fbd5ca74556e06cf3dfb726e023f9f4fb67bca839c2ebfbe7bf1386"
    "3c1ea7f37d2c57d3c46067ad24b3722199ca2b279993b08bf81ee6ef7019b6b71dd7f9f3b3c669aee7c4037f7e5e3cb3ac0a1ef8f3f6b4dfc5d48775d7f1e39d",
    "6addf5597fdd95ba3d1ff629a67dabfa7e1d83ff409718fa96a5f3debb08b0eedafb5a92554f4f250b5877fde89310f8f74ee7ffc3fa01172ae68b6b8552be75"
    "b4b977722015f75dc4ff4e99af44799b7a2f6a7e3e8275580ad661c7f51bd661c9e0c13aac3ded5f63ea5bd5e31f61da477a44f2e979fe6155d090d74a3a1ffe",
    "76ffe205ed3b6606271235c7c66decb08bb1bc8e34439ecf3ffef837c0e74ee7736fe63cdc28f18d933dbec026f6369962b57ae1a27cc96b4cfdd59db7d4109f"
    "e39e179cb2ef19691e877dcfe6c6eb9555c1837dcfec69ff1a531f78dc1e1e7d6be49abaf9dd5b37fb0febcf2475a7c6cbeddad76664df524325a4cf9301bebe",
    "43bc79f9faab183c646748de6e7209b9cda891a3f38024e5d4a22f707c42b987af97360e7acbd70fabbca26ae6b6ea64ededd953dbe2e570aec8cbf1e05c9169"
    "f1ccb22a7870ae883ded03df0f97217beb3eb5cd4f9ff69c9079f148fbe92e3a5f00ce03b9433c380fc49ef6af31f5577abd93ba8dabccfbbed2773078483f48",
    "3eee7da50d5ea49591dcfd65795f695ebf3d35011fc9677bdf619ce6cc5b0041bf9dff22bcb7e478febfe46829266602275aade6dff6a6b3ecfea1cf45fcbf0c"
    "e77663f8dff4dccbfaa337ad95ade66bdb1ba73981bc9739f1dcb7ee02792f778907792ff6b43f2faf6f60da477a44f219785d94b40c9dc92a497d2ad7d08120",
    "64d74d0f89bd67c4ab222d52ce8dc704b178a61d20f974e781184a21ee8f433ce60ef148ad9b3663ad6c23787114f416147f2beee322ed4686720f6fc37c1db4"
    "af6fc37b45d492afafc07b45aec683f78aec691ffcf1e182f3c7af30ed59d5d33b183ca427241fbf3f4c5590246beb0dcb1a6f8962f1ccf123f9ccfbc3f454f4",
    "b84190df7f06f98ecee7f74a3d943b12058d2d4a8d444bdc0954121bbb2e3ac7ef1a537fa5d751af32b6c5cfad9ecb37c2eb9ca24843e7a33e9db31fd39ec7ba"
    "68bf5dd5fbc3b11e93cdfb9c3e4aed3d2591f7dbeffdd323581f753aaf8ba5e33ced3fde3909b4dbadc451db1768ecf271f7f07a1753dfadfb7e3dc58cc7defb",
    "827dfb7c4de263b5a968c6b553e3ef012c9e693f483ed53ed08652c8bfaff66b385fc9f97c1fdc4e54ebde50f2349b0824b55c5e14dbf14d17c56960be0eda97"
    "7dfb7a7d0b8387f482e42fc4df37a506cd8b89513f5e9eb33ff3e63f5ecf891f9d808fe433c4e3073446324e437ddcdd007f7e59f9ddeafaaa904e5712be407c",
    "ed9c6798842ab7ebc7b53dca3dfc7e8da9bfc2f3562f2182fb08a832ada89c53e3eb112c9ef9f747728bf7774319c61d1ea96501ef295dfd0df37fe0972f2b6f"
    "5bf5cbd784c2ceb9945edf0eecefd4c24cfc72b7902cba289f11fcf241fbfa0ec4d5e7c483b8ba5d786659153c88abdbd33ef0f9a07d3db62dcef2bb183ca417",
    "241f9fff82a2e58bdb0fe67a463cd4fe9f4ec043f299f35ffa364232bff1b7ff09fef9b2f2b9d5b8ca7a2b55f41e04b2312519488847bb8590580851c0e76ee7"
    "f31f63dab3aa97ef62f0905e907cf279a7493127d00cd7fffdb2c4d17f31277e7a023e92db716e625f83a4f77b8cff700dfcf965e57fabfe7c6a778f396ee622",
    "b1e3745051fd32ef6f87775db48f00cce3f1fd77bb9fbfa8383cf8f9f3e2996555f0c0cfb7a7fd2ea63ee4438e1faf253bb5311ff24d0cde035d62e85761f936"
    "cf720be3fd257bbfd9784fa2af12e2fb11fcfc9d3cf0bde3f9fe3c5fdd3f0a86c23b6da110d95c5f4f49fb0ce51ebe7f8ea96f558f22a67da447249f83efe3ba",
    "0757ae71a227c6d2b2c6b7b97251e3e412dfd069dfe0f7742eae13bbb19d77a327f1933ddf9ea2ec3c3fcfaa5d662ba72fdedca8c5f9fbdd39f1fe1c8b678e1b"
    "c949f80d63754b3ece18a0229fc2fde38ef088adf346762e792114af75222257f2a6b6527b0aeda2b85017531fe6fdf8f15abb9fc4c93d2f706a9d969dfbbc10",
    "c2e299f683e453ed87d4570a593fe2eac3e867f0bce074be4f7a4f23ad8b5840f406bc9973cd9760b88ee0a27340e079e1e5e3b3669759e2cf0b09331656e06b"
    "75785eb0d96f18ab5bf279a16fff4f189e179c7eff38620aa91db653ebb42217fb74bbdacee7bcbc8bf2fcbb98fa30efc78fd79a9d7e0fd6172ce2c1fac2ac78",
    "6659153c585fb0a7fd2ea63ef0fdf8f12e1ddf437c08e2432b8007f1217bda87f8d0cbc7672dfe4f3e3e9484f8d05de7a12dda6f781fe243cebf7fd47c17c249"
    "ae132b342fb7b48dbdece6c9652cefa27d96bb98fa30efc78f77dafb090e0f9e17cc02cf0bb3e2996555f0e079c19ef6bb98fa6ee57b19331eab76fa2a66bcf7",
    "477edf2bd15cb4f77995b38dffef61f01fe81243df7445ed5d3b95fffd583cd39e907caaf7d475a5907fefe4ea19ecc7ec7cfe6f562a6c352857b2a55c51c94b"
    "beed6d211584f560e0ff91df8fe5ff677dfea7ec7bff6cd279b856cf715f11fe1f38a7c7ac4790ff3ffa2404fb4a389dff0feb075ca8982fae154af9d6d1e6de",
    "c98154dc8f03ff3b95ff9f62c6b3acef1bc3f92b6671c0be5470feca1de2c1f92bf6b4dfc5d407be1f3f5ed27c0ff99f6681fccf513cb3ac0a1ee47fdad3fe73"
    "4c7dc8071aff89ca30bfdfc6ef49f921e85de8d18420a7e603fd0516cf1c3792937ccf7c9ce340d0ae7e00f940cb7bffb03a4fb7339dd80eb3ab9ec7940d3a5d",
    "6f3452aa77179e1760de8ffc1ef697980d0ff28166c533cbaae0413ed07cedff3f6d5c1cad",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 106176U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_Fast_MPCV40_form_Step2_info.cpp) */