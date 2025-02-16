﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides a statement the Amazon Lex conveys to the user when the intent is
   * successfully fulfilled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentClosingSetting">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELSV2_API IntentClosingSetting
  {
  public:
    IntentClosingSetting();
    IntentClosingSetting(Aws::Utils::Json::JsonView jsonValue);
    IntentClosingSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The response that Amazon Lex sends to the user when the intent is
     * complete.</p>
     */
    inline const ResponseSpecification& GetClosingResponse() const{ return m_closingResponse; }

    /**
     * <p>The response that Amazon Lex sends to the user when the intent is
     * complete.</p>
     */
    inline bool ClosingResponseHasBeenSet() const { return m_closingResponseHasBeenSet; }

    /**
     * <p>The response that Amazon Lex sends to the user when the intent is
     * complete.</p>
     */
    inline void SetClosingResponse(const ResponseSpecification& value) { m_closingResponseHasBeenSet = true; m_closingResponse = value; }

    /**
     * <p>The response that Amazon Lex sends to the user when the intent is
     * complete.</p>
     */
    inline void SetClosingResponse(ResponseSpecification&& value) { m_closingResponseHasBeenSet = true; m_closingResponse = std::move(value); }

    /**
     * <p>The response that Amazon Lex sends to the user when the intent is
     * complete.</p>
     */
    inline IntentClosingSetting& WithClosingResponse(const ResponseSpecification& value) { SetClosingResponse(value); return *this;}

    /**
     * <p>The response that Amazon Lex sends to the user when the intent is
     * complete.</p>
     */
    inline IntentClosingSetting& WithClosingResponse(ResponseSpecification&& value) { SetClosingResponse(std::move(value)); return *this;}


    /**
     * <p>Specifies whether an intent's closing response is used. When this field is
     * false, the closing response isn't sent to the user and no closing input from the
     * user is used. If the <code>active</code> field isn't specified, the default is
     * true.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Specifies whether an intent's closing response is used. When this field is
     * false, the closing response isn't sent to the user and no closing input from the
     * user is used. If the <code>active</code> field isn't specified, the default is
     * true.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Specifies whether an intent's closing response is used. When this field is
     * false, the closing response isn't sent to the user and no closing input from the
     * user is used. If the <code>active</code> field isn't specified, the default is
     * true.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Specifies whether an intent's closing response is used. When this field is
     * false, the closing response isn't sent to the user and no closing input from the
     * user is used. If the <code>active</code> field isn't specified, the default is
     * true.</p>
     */
    inline IntentClosingSetting& WithActive(bool value) { SetActive(value); return *this;}

  private:

    ResponseSpecification m_closingResponse;
    bool m_closingResponseHasBeenSet;

    bool m_active;
    bool m_activeHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
