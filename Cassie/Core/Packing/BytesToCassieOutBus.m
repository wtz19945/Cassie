%BYTESTOCASSIEOUTBUS Convert a byte array to a CassieOutBus bus.

% Copyright 2018 Agility Robotics
% Generated automatically by BusModule.generateUnpackingSystem

classdef BytesToCassieOutBus < ...
    matlab.System & ...
    matlab.system.mixin.Propagates %#codegen

  % PROTECTED METHODS =====================================================
  methods (Access = protected)
    % SYSTEM CLASS METHODS ================================================
    function setupImpl(~)
      %SETUPIMPL Initialize System object.
    end % setupImpl

    function bus = stepImpl(~, bytes)
      %STEPIMPL System output and state update equations.

      bus = struct(...
        'pelvis', struct(...
          'targetPc', struct(...
            'etherCatStatus', typecast(bytes(1:24), 'int32'), ...
            'etherCatNotifications', typecast(bytes(25:108), 'int32'), ...
            'taskExecutionTime', double(typecast(bytes(109:112), 'single')), ...
            'overloadCounter', typecast(bytes(113:116), 'uint32'), ...
            'cpuTemperature', double(typecast(bytes(117:120), 'single'))), ...
          'battery', struct(...
            'dataGood', logical(bytes(121)), ...
            'stateOfCharge', double(typecast(bytes(122:125), 'single')), ...
            'voltage', double(typecast(bytes(126:173), 'single')), ...
            'current', double(typecast(bytes(174:177), 'single')), ...
            'temperature', double(typecast(bytes(178:193), 'single'))), ...
          'radio', struct(...
            'radioReceiverSignalGood', logical(bytes(194)), ...
            'receiverMedullaSignalGood', logical(bytes(195)), ...
            'channel', double(typecast(bytes(196:259), 'single'))), ...
          'vectorNav', struct(...
            'dataGood', logical(bytes(260)), ...
            'vpeStatus', typecast(bytes(261:262), 'uint16'), ...
            'pressure', double(typecast(bytes(263:266), 'single')), ...
            'temperature', double(typecast(bytes(267:270), 'single')), ...
            'magneticField', double(typecast(bytes(271:282), 'single')), ...
            'angularVelocity', double(typecast(bytes(283:294), 'single')), ...
            'linearAcceleration', double(typecast(bytes(295:306), 'single')), ...
            'orientation', double(typecast(bytes(307:322), 'single'))), ...
          'medullaCounter', bytes(323), ...
          'medullaCpuLoad', typecast(bytes(324:325), 'uint16'), ...
          'bleederState', logical(bytes(326)), ...
          'leftReedSwitchState', logical(bytes(327)), ...
          'rightReedSwitchState', logical(bytes(328)), ...
          'vtmTemperature', double(typecast(bytes(329:332), 'single'))), ...
        'leftLeg', struct(...
          'hipRollDrive', struct(...
            'statusWord', typecast(bytes(333:334), 'uint16'), ...
            'position', double(typecast(bytes(335:338), 'single')), ...
            'velocity', double(typecast(bytes(339:342), 'single')), ...
            'torque', double(typecast(bytes(343:346), 'single')), ...
            'driveTemperature', double(typecast(bytes(347:350), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(351:354), 'single')), ...
            'torqueLimit', double(typecast(bytes(355:358), 'single')), ...
            'gearRatio', double(typecast(bytes(359:362), 'single'))), ...
          'hipYawDrive', struct(...
            'statusWord', typecast(bytes(363:364), 'uint16'), ...
            'position', double(typecast(bytes(365:368), 'single')), ...
            'velocity', double(typecast(bytes(369:372), 'single')), ...
            'torque', double(typecast(bytes(373:376), 'single')), ...
            'driveTemperature', double(typecast(bytes(377:380), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(381:384), 'single')), ...
            'torqueLimit', double(typecast(bytes(385:388), 'single')), ...
            'gearRatio', double(typecast(bytes(389:392), 'single'))), ...
          'hipPitchDrive', struct(...
            'statusWord', typecast(bytes(393:394), 'uint16'), ...
            'position', double(typecast(bytes(395:398), 'single')), ...
            'velocity', double(typecast(bytes(399:402), 'single')), ...
            'torque', double(typecast(bytes(403:406), 'single')), ...
            'driveTemperature', double(typecast(bytes(407:410), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(411:414), 'single')), ...
            'torqueLimit', double(typecast(bytes(415:418), 'single')), ...
            'gearRatio', double(typecast(bytes(419:422), 'single'))), ...
          'kneeDrive', struct(...
            'statusWord', typecast(bytes(423:424), 'uint16'), ...
            'position', double(typecast(bytes(425:428), 'single')), ...
            'velocity', double(typecast(bytes(429:432), 'single')), ...
            'torque', double(typecast(bytes(433:436), 'single')), ...
            'driveTemperature', double(typecast(bytes(437:440), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(441:444), 'single')), ...
            'torqueLimit', double(typecast(bytes(445:448), 'single')), ...
            'gearRatio', double(typecast(bytes(449:452), 'single'))), ...
          'footDrive', struct(...
            'statusWord', typecast(bytes(453:454), 'uint16'), ...
            'position', double(typecast(bytes(455:458), 'single')), ...
            'velocity', double(typecast(bytes(459:462), 'single')), ...
            'torque', double(typecast(bytes(463:466), 'single')), ...
            'driveTemperature', double(typecast(bytes(467:470), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(471:474), 'single')), ...
            'torqueLimit', double(typecast(bytes(475:478), 'single')), ...
            'gearRatio', double(typecast(bytes(479:482), 'single'))), ...
          'shinJoint', struct(...
            'position', double(typecast(bytes(483:486), 'single')), ...
            'velocity', double(typecast(bytes(487:490), 'single'))), ...
          'tarsusJoint', struct(...
            'position', double(typecast(bytes(491:494), 'single')), ...
            'velocity', double(typecast(bytes(495:498), 'single'))), ...
          'footJoint', struct(...
            'position', double(typecast(bytes(499:502), 'single')), ...
            'velocity', double(typecast(bytes(503:506), 'single'))), ...
          'medullaCounter', bytes(507), ...
          'medullaCpuLoad', typecast(bytes(508:509), 'uint16'), ...
          'reedSwitchState', logical(bytes(510))), ...
        'rightLeg', struct(...
          'hipRollDrive', struct(...
            'statusWord', typecast(bytes(511:512), 'uint16'), ...
            'position', double(typecast(bytes(513:516), 'single')), ...
            'velocity', double(typecast(bytes(517:520), 'single')), ...
            'torque', double(typecast(bytes(521:524), 'single')), ...
            'driveTemperature', double(typecast(bytes(525:528), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(529:532), 'single')), ...
            'torqueLimit', double(typecast(bytes(533:536), 'single')), ...
            'gearRatio', double(typecast(bytes(537:540), 'single'))), ...
          'hipYawDrive', struct(...
            'statusWord', typecast(bytes(541:542), 'uint16'), ...
            'position', double(typecast(bytes(543:546), 'single')), ...
            'velocity', double(typecast(bytes(547:550), 'single')), ...
            'torque', double(typecast(bytes(551:554), 'single')), ...
            'driveTemperature', double(typecast(bytes(555:558), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(559:562), 'single')), ...
            'torqueLimit', double(typecast(bytes(563:566), 'single')), ...
            'gearRatio', double(typecast(bytes(567:570), 'single'))), ...
          'hipPitchDrive', struct(...
            'statusWord', typecast(bytes(571:572), 'uint16'), ...
            'position', double(typecast(bytes(573:576), 'single')), ...
            'velocity', double(typecast(bytes(577:580), 'single')), ...
            'torque', double(typecast(bytes(581:584), 'single')), ...
            'driveTemperature', double(typecast(bytes(585:588), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(589:592), 'single')), ...
            'torqueLimit', double(typecast(bytes(593:596), 'single')), ...
            'gearRatio', double(typecast(bytes(597:600), 'single'))), ...
          'kneeDrive', struct(...
            'statusWord', typecast(bytes(601:602), 'uint16'), ...
            'position', double(typecast(bytes(603:606), 'single')), ...
            'velocity', double(typecast(bytes(607:610), 'single')), ...
            'torque', double(typecast(bytes(611:614), 'single')), ...
            'driveTemperature', double(typecast(bytes(615:618), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(619:622), 'single')), ...
            'torqueLimit', double(typecast(bytes(623:626), 'single')), ...
            'gearRatio', double(typecast(bytes(627:630), 'single'))), ...
          'footDrive', struct(...
            'statusWord', typecast(bytes(631:632), 'uint16'), ...
            'position', double(typecast(bytes(633:636), 'single')), ...
            'velocity', double(typecast(bytes(637:640), 'single')), ...
            'torque', double(typecast(bytes(641:644), 'single')), ...
            'driveTemperature', double(typecast(bytes(645:648), 'single')), ...
            'dcLinkVoltage', double(typecast(bytes(649:652), 'single')), ...
            'torqueLimit', double(typecast(bytes(653:656), 'single')), ...
            'gearRatio', double(typecast(bytes(657:660), 'single'))), ...
          'shinJoint', struct(...
            'position', double(typecast(bytes(661:664), 'single')), ...
            'velocity', double(typecast(bytes(665:668), 'single'))), ...
          'tarsusJoint', struct(...
            'position', double(typecast(bytes(669:672), 'single')), ...
            'velocity', double(typecast(bytes(673:676), 'single'))), ...
          'footJoint', struct(...
            'position', double(typecast(bytes(677:680), 'single')), ...
            'velocity', double(typecast(bytes(681:684), 'single'))), ...
          'medullaCounter', bytes(685), ...
          'medullaCpuLoad', typecast(bytes(686:687), 'uint16'), ...
          'reedSwitchState', logical(bytes(688))), ...
        'isCalibrated', logical(bytes(689)), ...
        'messages', DiagnosticCodes(typecast(bytes(690:697), 'int16')));
    end % stepImpl

    function resetImpl(~)
      %RESETIMPL Reset System object states.
    end % resetImpl

    function name_1 = getInputNamesImpl(~)
      %GETINPUTNAMESIMPL Return input port names for System block.
      name_1 = '';
    end % getInputNamesImpl

    function name_1 = getOutputNamesImpl(~)
      %GETOUTPUTNAMESIMPL Return output port names for System block.
      name_1 = '';
    end % getOutputNamesImpl

    % PROPAGATES CLASS METHODS ============================================
    function sz_1 = getOutputSizeImpl(~)
      %GETOUTPUTSIZEIMPL Get sizes of output ports.
      sz_1 = [1, 1];
    end % getOutputSizeImpl

    function dt_1 = getOutputDataTypeImpl(~)
      %GETOUTPUTDATATYPEIMPL Get data types of output ports.
      dt_1 = 'CassieOutBus';
    end % getOutputDataTypeImpl

    function cp_1 = isOutputComplexImpl(~)
      %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
      cp_1 = false;
    end % isOutputComplexImpl

    function flag_1 = isOutputFixedSizeImpl(~)
      %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
      flag_1 = true;
    end % isOutputFixedSizeImpl
  end % methods
end % classdef