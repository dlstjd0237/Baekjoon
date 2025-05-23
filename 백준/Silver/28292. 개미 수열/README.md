# [Silver V] 개미 수열 - 28292 

[문제 링크](https://www.acmicpc.net/problem/28292) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

애드 혹, 구현

### 제출 일자

2025년 4월 9일 23:32:30

### 문제 설명

<p>대구소프트웨어마이스터고등학교에 다니고 있는 changwook987은 베르나르 베르베르의 소설 『개미』를 읽다가 흥미로운 수열을 보았다.</p>

<p>$1$, $11$, $12$, $1121$, $\dots$</p>

<p>이 수열은 소설 『개미』에서 나와 <strong>개미 수열</strong>이라고 부르기도 하고 <strong>읽고 말하기 수열</strong>이라고 하기도 한다.</p>

<p>이 수열의 규칙은 이렇다.</p>

<ol>
	<li>첫 번째 항은 $1$이다.</li>
	<li>이전 항의 이웃한 같은 숫자들을 묶는다.
	<ul>
		<li>이전 항이 $11123333$일 경우 $(1, 1, 1), (2), (3, 3, 3, 3)$</li>
	</ul>
	</li>
	<li>묶인 숫자들의 숫자와 개수를 붙여 쓴다.
	<ul>
		<li>묶인 숫자들이 $(1, 1, 1), (2), (3, 3, 3, 3)$이므로 숫자와 개수를 붙여 쓰면 $132134$</li>
	</ul>
	</li>
	<li>2, 3을 반복한다.</li>
</ol>

<p>이 개미 수열을 관찰하다 보면 수가 빠르게 길어지지만, 수를 이루는 숫자가 커지기는 쉽지 않다는 것을 알 수 있다.</p>

<p>그렇다면 이 수열의 $N$번째 항의 자릿수 중에서 가장 큰 수는 무엇일까?</p>

<p>개미 수열의 $N$번째 항의 자릿수 중 가장 큰 수를 출력해 보자.</p>

### 입력 

 <p>첫째 줄에 양의 정수 $N$이 주어진다. $(1 \le N \le 100)$</p>

### 출력 

 <p>개미 수열의 $N$번째 항의 자릿수 중에서 가장 큰 수를 출력한다.</p>

