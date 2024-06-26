# MecanumWheelControl
> Mecanum Wheel-based Precision Control

<table>
 <tr>
    <td align="center"><a href="https://github.com/re-ag"><img src="https://avatars.githubusercontent.com/re-ag" width="130px;" alt=""></a></td>
    <td align="center"><a href="https://github.com/shintaewon"><img src="https://avatars.githubusercontent.com/shintaewon" width="130px;" alt=""></a></td>
    <td align="center"><a href="https://github.com/GeoChoi"><img src="https://avatars.githubusercontent.com/GeoChoi" width="130px;" alt=""></a></td>
   <td align="center"><img src="./image/chanik.png", width="130px"></a></td>
   <td align="center"><img src="./image/howon.jpg", width="130px"></td>
  </tr>
  <tr>
    <td align="center"><a href="https://github.com/re-ag"><b>김재은</b></a></td>
    <td align="center"><a href="https://github.com/shintaewon"><b>신태원</b></a></td>
    <td align="center"><a href="https://github.com/GeoChoi"><b>최지오</b></a></td>
    <td align="center"><a href="https://github.com/chanik-s"><b>정찬익</b></a></td>
    <td align="center"><a href="https://github.com/howonu"><b>유호원</b></a></td>
  </tr>
</table>
<br />


## :white_check_mark: Jira Smart Commit 규칙
- '완료' 로 상태 바꾸기 : #{ISSUE_NUM} #done #comment "{detail info}"
- '진행 중' 으로 상태 바꾸기 : #{ISSUE_NUM} #in-progress #comment "{detail info}"
- ISSUE_NUM - PROJ_N (Jira 에 해당 티켓에 대한 Number 쓰면됨)
- detail info - 해당 커밋이 어떤 내용인지 적으면됨,.
- ex) PROJ_4 #done #comment feat: 조도 센서 데이터 받아오는거까지 완료 
## :white_check_mark: 커밋 메시지 규칙

- `feat` : 새로운 기능에 대한 커밋
- `fix` : 빌드 관련 파일 수정에 대한 커밋
- `build` : 빌드 관련 파일 수정에 대한 커밋
- `chore` : 그 외 자잘한 수정에 대한 커밋(기타 변경)
- `ci` : CI 관련 설정 수정에 대한 커밋
- `docs` : 문서 수정에 대한 커밋
- `style` : 코드 스타일 혹은 포맷 등에 관한 커밋
- `refactor` : 코드 리팩토링에 대한 커밋
- `test` : 테스트 코드 수정에 대한 커밋
- `init` : 시스템 초기 설정
- `dir` : 폴더 및 문서 구조 변경
### 커밋 메시지 예시
`#1 feat: 조도센서 관련 기능 구현`

## :white_check_mark: 깃허브 이슈 사용 관련
- 개발 시작 전 **이슈** & 브랜치 생성 후 작업합니다.
- 이슈 만들어서 Number 확인하고, 커밋할때 앞에다가 #이슈번호 붙혀서 커밋하기!!
- 브랜치도 이슈 Number 따라서 만들기( ex. feature/7 )

## :white_check_mark: Code Convention

1. Type 선언시 `_t` 붙이지 않기, AURIX Ifx 제공 자료형 사용
    * ex) `uint32`(O), `uint32_t`(X), `int8`(X), `sint8`(O), `float32`(O), `int`(X), `double`(X), 
    ```
    typedef unsigned char       boolean;        /* for use with TRUE/FALSE      */
    typedef unsigned char       uint8;
    typedef unsigned short      uint16;
    typedef unsigned long       uint32;
    typedef unsigned long long  uint64;

    typedef signed char         sint8;
    typedef short               sint16;
    typedef long                sint32;
    typedef long long           sint64;

    typedef float               float32;
    typedef double              float64;
    ```
2. 라이브러리내 global 변수 사용하지 않고 static 키워드를 사용하여 외부에서 getter 함수 통해 접근
* ex) static JoystickValues s_joystick_values;
    ```
    JoystickValues get_bluetooth_joystick_values(void) {
    return s_joystick_values;
    }

    ```   
3. Funtion 네이밍 규칙: 수행동작_device이름_상세동작 
* ex) send_usb_printf

4. 지정자에 따라 접두어 붙이기
      * static : `s_varname`
      * extern : `g_varname`
      * pointer : `p_varname`

5. 변수 네이밍 규칙 : Snake Case convention 적용 - 예) `rpm_ref`, `sub_state`
6. 함수 네이밍 규칙 : Snake Case convention 적용 - 예) `get_state()`
