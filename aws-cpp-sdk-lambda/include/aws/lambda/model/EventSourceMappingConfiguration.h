﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>Describes mapping between an Amazon Kinesis stream and a Lambda
   * function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventSourceMappingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API EventSourceMappingConfiguration
  {
  public:
    EventSourceMappingConfiguration();
    EventSourceMappingConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    EventSourceMappingConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUIDHasBeenSet = true; m_uUID = std::move(value); }

    /**
     * <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
     */
    inline void SetUUID(const char* value) { m_uUIDHasBeenSet = true; m_uUID.assign(value); }

    /**
     * <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(const char* value) { SetUUID(value); return *this;}

    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records.</p>
     */
    inline EventSourceMappingConfiguration& WithBatchSize(int value) { SetBatchSize(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the
     * source of events.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the
     * source of events.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the
     * source of events.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the
     * source of events.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the
     * source of events.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the
     * source of events.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the
     * source of events.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The UTC time string indicating the last time the event mapping was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The UTC time string indicating the last time the event mapping was
     * updated.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The UTC time string indicating the last time the event mapping was
     * updated.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The UTC time string indicating the last time the event mapping was
     * updated.</p>
     */
    inline EventSourceMappingConfiguration& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The UTC time string indicating the last time the event mapping was
     * updated.</p>
     */
    inline EventSourceMappingConfiguration& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline const Aws::String& GetLastProcessingResult() const{ return m_lastProcessingResult; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(const Aws::String& value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult = value; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(Aws::String&& value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult = std::move(value); }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(const char* value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult.assign(value); }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(const Aws::String& value) { SetLastProcessingResult(value); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(Aws::String&& value) { SetLastProcessingResult(std::move(value)); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(const char* value) { SetLastProcessingResult(value); return *this;}

    /**
     * <p>The state of the event source mapping. It can be <code>Creating</code>,
     * <code>Enabled</code>, <code>Disabled</code>, <code>Enabling</code>,
     * <code>Disabling</code>, <code>Updating</code>, or <code>Deleting</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the event source mapping. It can be <code>Creating</code>,
     * <code>Enabled</code>, <code>Disabled</code>, <code>Enabling</code>,
     * <code>Disabling</code>, <code>Updating</code>, or <code>Deleting</code>.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the event source mapping. It can be <code>Creating</code>,
     * <code>Enabled</code>, <code>Disabled</code>, <code>Enabling</code>,
     * <code>Disabling</code>, <code>Updating</code>, or <code>Deleting</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the event source mapping. It can be <code>Creating</code>,
     * <code>Enabled</code>, <code>Disabled</code>, <code>Enabling</code>,
     * <code>Disabling</code>, <code>Updating</code>, or <code>Deleting</code>.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the event source mapping. It can be <code>Creating</code>,
     * <code>Enabled</code>, <code>Disabled</code>, <code>Enabling</code>,
     * <code>Disabling</code>, <code>Updating</code>, or <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source mapping. It can be <code>Creating</code>,
     * <code>Enabled</code>, <code>Disabled</code>, <code>Enabling</code>,
     * <code>Disabling</code>, <code>Updating</code>, or <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the event source mapping. It can be <code>Creating</code>,
     * <code>Enabled</code>, <code>Disabled</code>, <code>Enabling</code>,
     * <code>Disabling</code>, <code>Updating</code>, or <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(const char* value) { SetState(value); return *this;}

    /**
     * <p>The reason the event source mapping is in its current state. It is either
     * user-requested or an AWS Lambda-initiated state transition.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /**
     * <p>The reason the event source mapping is in its current state. It is either
     * user-requested or an AWS Lambda-initiated state transition.</p>
     */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = value; }

    /**
     * <p>The reason the event source mapping is in its current state. It is either
     * user-requested or an AWS Lambda-initiated state transition.</p>
     */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::move(value); }

    /**
     * <p>The reason the event source mapping is in its current state. It is either
     * user-requested or an AWS Lambda-initiated state transition.</p>
     */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason.assign(value); }

    /**
     * <p>The reason the event source mapping is in its current state. It is either
     * user-requested or an AWS Lambda-initiated state transition.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>The reason the event source mapping is in its current state. It is either
     * user-requested or an AWS Lambda-initiated state transition.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>The reason the event source mapping is in its current state. It is either
     * user-requested or an AWS Lambda-initiated state transition.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}

  private:
    Aws::String m_uUID;
    bool m_uUIDHasBeenSet;
    int m_batchSize;
    bool m_batchSizeHasBeenSet;
    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet;
    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;
    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet;
    Aws::String m_lastProcessingResult;
    bool m_lastProcessingResultHasBeenSet;
    Aws::String m_state;
    bool m_stateHasBeenSet;
    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
